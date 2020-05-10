package com.company;

import java.nio.file.FileAlreadyExistsException;

public class Main {

    public static void main(String[] args)
    {
	    System.out.println("1) " + repeat("hello", 3));
        System.out.println("2) " + differenceMaxMin(new int[]{10, 4, 1, 4, -10, -50, 32, 21}));
        System.out.println("3) " + isAvgWhole(new int[]{1, 2, 3, 4}));
        int[] array = new int[4];
        array = cumulativeSum(new int[]{1, 2, 3, 4});
        System.out.print("4) ");
        for (int i = 0; i < 4; i++)
            System.out.print(array[i] + " ");
        System.out.println("\n5) " + getDecimalPlaces("43.039"));
        System.out.println("6) " + Fibonacci(12));
        System.out.println("7) " + isValid("393939"));
        System.out.println("8) " + isStrangePair("sparkling", "groups"));
        System.out.println("9) Prefix " + isPrefix("retrospect", "sub-"));
        System.out.println("9) Suffix " + isSuffix("vocation", "-logy"));
        System.out.println("10) " + boxSeq(0));
    }

    public static String repeat(String s, int n)
    {
        int len = s.length();
        String s1 = "";
        for (int i = 0; i < len; i++)
            for (int j = n; j > 0; j--)
                s1 += s.charAt(i);
        return (s1);
    }

    public static int differenceMaxMin(int[] array)
    {
        int min = array[0];
        int max = array[0];
        int len = array.length;
        for (int i = 1; i < len; i++)
        {
            if (array[i] > max)
                max = array[i];
            if (array[i] < min)
                min = array[i];
        }
        return (max - min);
    }

    public static boolean isAvgWhole(int[] array)
    {
        int sum = 0;
        int len = array.length;
        for (int value : array) sum += value;
        return sum % len == 0;
    }

    public static int[] cumulativeSum(int[] array)
    {
        int len = array.length;
        int[] massive = new int[len];
        for (int i = 0; i < len; i++)
            for (int j = i; j >= 0; j--)
                massive[i] += array[j];
        return massive;
    }

    public static int getDecimalPlaces(String s)
    {
        int res = 0;
        int len = s.length();
        for (int i = 0; i < len; i++)
            if (s.charAt(i) == '.')
                for (int j = i + 1; j < len; j++)
                    res++;
        return(res);
    }

    public static int Fibonacci(int n)
    {
        int pred = 0;
        int res = 1;
        for (int i = 1; i < n; i++)
        {
            pred = res - pred;
            res += pred;
        }
        return (res);
    }

    public static boolean isValid(String s)
    {
        int len = s.length();
        if (len != 5)
            return false;
        for (int i = 0; i < len; i++)
            if (s.charAt(i) < '0' || s.charAt(i) > '9')
                return false;
        return true;
    }

    public static boolean isStrangePair(String s1, String s2)
    {
        int len1 = s1.length();
        int len2 = s2.length();
        if ((len1 == 0 && len2 != 0) || (len2 == 0 && len1 != 0))
            return false;
        if (len1 == 0)
            return true;
        return (s1.charAt(0) == s2.charAt(len2-1) && s2.charAt(0) == s1.charAt(len1-1));
    }

    public static boolean isPrefix(String s, String prefix)
    {
        int len1 = s.length();
        int len2 = prefix.length() - 1;
        if (len1 > len2)
        {
            for(int i = 0; i < len2; i++)
                if (s.charAt(i) != prefix.charAt(i))
                    return false;
        }
        return true;
    }
    
    public static boolean isSuffix(String s, String suffix)
    {
        int len1 = s.length();
        int len2 = suffix.length() - 1;
        int raz;
        if (len1 > len2)
        {
            raz = len1 - len2 - 1;
            for(int i = len1 - 1; i >= len1 - len2; i--)
                if (s.charAt(i) != suffix.charAt(i - raz))
                    return false;
        }
        return true;
    }

    public static int boxSeq(int n)
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
                sum += 3;
            else
                sum -= 1;
        }
        return (sum);
    }
}
