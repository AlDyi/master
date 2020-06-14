package com.company;
import java.util.LinkedList;

public class URLPool
{

    private LinkedList<URLDepthPair> findLink = new LinkedList<URLDepthPair>();
    private LinkedList<URLDepthPair> viewedLink = new LinkedList<URLDepthPair>();

    private int Depth;
    private int Wait;
    private int Threads;

    public URLPool(String url, int depth, int threads)
    {
        findLink.add(new URLDepthPair(url, depth));
        Depth = depth;
        Threads = threads;
    }

    public synchronized URLDepthPair get() throws InterruptedException
    {
        if (findLink.size() == 0)
        {
            Wait++;
            if (Wait == Threads)
            {
                getSites();
                System.exit(0);
            }
            wait();
        }
        return findLink.removeFirst();
    }

    public synchronized void addNotProcessed(URLDepthPair pair)
    {
        findLink.add(pair);
        if (Wait > 0)
        {
            Wait--;
            notify();
        }
    }

    public void getSites()
    {
        System.out.println("Depth: " + Depth);
        for (int i = 0; i < viewedLink.size(); i++)
        {
            System.out.println( Depth - viewedLink.get(i).getDepth() + " " +  viewedLink.get(i).getURL());
        }
        System.out.println("Links visited: " + viewedLink.size());
    }

    public void addProcessed(URLDepthPair pair)
    {
        viewedLink.add(pair);
    }

    public LinkedList<URLDepthPair> getResult()
    {
        return viewedLink;
    }

    public LinkedList<URLDepthPair> getNotProcessed()
    {
        return findLink;
    }
}
