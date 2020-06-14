package com.company;
import java.util.LinkedList;
import java.net.MalformedURLException;
import java.net.URL;

public class URLDepthPair
{
    public static final String URL_PREFIX = "http:";

    public String URL;
    public int depth;

    public URLDepthPair (String URL, int depth)
    {
        this.URL = URL;
        this.depth = depth;
    }
    @Override
    public String toString() {

        String stringDepth = Integer.toString(depth);
        return stringDepth + '\t' + depth;
    }
    public String getWebHost() throws MalformedURLException
    {
        URL host = new URL(URL);
        return host.getHost();
    }

    public String getDocPath() throws MalformedURLException
    {
        URL path = new URL(URL);
        return path.getPath();
    }


    public int getDepth()
    {
        return depth;
    }

    public String getURL()
    {
        return URL;
    }
    public static boolean check(LinkedList<URLDepthPair> resultLink, URLDepthPair pair) //проверяет совпадение url-адресов
    {
        boolean isAlready = true;
        for (URLDepthPair c : resultLink)
            if (c.getURL().equals(pair.getURL()))
                isAlready = false;
        return isAlready;
    }
}
