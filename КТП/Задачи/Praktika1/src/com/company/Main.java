package com.company;

public class Main {

    public static void main(String[] args)
    {
        System.out.println("1) " + ramainder(45, 19));
        System.out.println("2) " + triAria(3, 2));
        System.out.println("3) " + animals(5, 2, 8));
        System.out.println("4) " + profitableGamble(0.2, 50, 9) );
        System.out.println("5) " + operation(32, 8, 4));
        System.out.println("6) " + ctoa('A'));
        System.out.println("7) " + addUpTo(7));
        System.out.println("8) " + nextEdge(8, 10));
        System.out.println("9) " + sumOfCubes(new int []{1, 5, 9}));
        System.out.println("10) " + abcmath(1, 2, 3));
    }
    public static int ramainder(int a, int b)
    {
        return (a % b);
    }
    public static double triAria(int a, int h)
    {
        return (0.5 * a * h);
    }
    public static int animals(int chicken, int cows, int pigs)
    {
        return(2*chicken + 4*(cows+pigs));
    }
    public static boolean profitableGamble(double prob, double prize, double pay)
    {
        if (prob*prize > pay)
            return true;
        return false;
    }
    public static String operation(int N, int a, int b)
    {
        if (a + b == N)
            return ("added");
        else if (a - b == N)
            return ("subtracted");
        else if (a * b == N)
            return("multiplied");
        else if ((a / b == N) && (a % b == 0))
            return ("divided");
        else
            return ("none");
    }
    public static int ctoa(char c)
    {
        return ((int)c);
    }
    public static int addUpTo(int n)
    {
        int sum;

        sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;
        return(sum);
    }
    public static int nextEdge(int a, int b)
    {
        return(a + b - 1);
    }
    public static int sumOfCubes(int[] array)
    {
        int len = array.length;
        int sum = 0;
        for (int i = 0; i < len; i++)
            sum += Math.pow(array[i], 3);
        return (sum);
    }
    public static boolean abcmath(int a, int b, int c)
    {
        for (int i = 1; i <= b; i++)
            a += a;
        if (a % c == 0)
            return true;
        return false;
    }
}
