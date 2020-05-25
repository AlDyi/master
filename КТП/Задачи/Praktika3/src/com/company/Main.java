package com.company;

public class Main {

    public static void main(String[] args) {
        System.out.println("1)" + solutions(1, 0, 0));
        System.out.println("2)" + findZip("all zip files are zipped"));
        System.out.println("3)" + checkPerfect(496));
        System.out.println("4)" + flipEndChars("Cat, dog, and mouse."));
        System.out.println("5)" + isValidHexCode("#CD5C5C"));
        System.out.println("6)" + same(new int []{1,3,4,4,3,3,4}, new int []{2, 5, 7}));
        System.out.println("7)" + isKaprekar(999));
        System.out.println("8)" + longestZero("01100001011000"));
        System.out.println("9)" + nextPrime(24));
        System.out.println("10)" + rightTriangle(70, 130, 110));
    }

    public static int solutions(int a, int b, int c)
    {
        int D = b*b - 4*a*c;
        if (D>0)
            return (2);
        else if (D == 0)
            return (1);
        else
            return (0);
    }

    public static int findZip(String s)
    {
        int len = s.length();
        int count = 0;
        int tmp = 0;

        for (int i = 0; i < len - 2; i++)
        {
            while (s.charAt(i) != 'z' && i < len - 2)
                i++;
            if (s.charAt(i) == 'z' && s.charAt(i+1) == 'i' && s.charAt(i+2) == 'p' && i+2 < len)
                count++;
            else
                i++;
            if (count == 2)
            {
                tmp = i;
                break;
            }
        }
        return (count == 2 ? tmp : -1);
    }

    public static boolean checkPerfect(int n)
    {
        int sum;

        sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (n%i == 0)
                sum+=i;
        }
        return (sum == n);
    }

    public static String flipEndChars(String s)
    {
        String s1 = "";
        int len = s.length();
        if (len < 2)
            return ("Incompatible.");
        if (s.charAt(0) == s.charAt(len - 1))
            return("Two's a pair.");
        s1 += s.charAt(len - 1);
        for (int i = 1; i < len - 1; i++)
            s1 += s.charAt(i);
        s1 += s.charAt(0);
        return (s1);
    }

    public static boolean isValidHexCode(String s)
    {
        int len = s.length();
        if (len != 7 || s.charAt(0) != '#')
            return false;
        for (int i = 1; i < len; i++)
        {
            if (!((s.charAt(i) >= '0' && s.charAt(i) <= '9') ||
                    (s.charAt(i) >= 'A' && s.charAt(i) <= 'F') ||
                    (s.charAt(i) >= 'a' && s.charAt(i) <= 'f')))
                return false;
        }
        return true;
    }

    public static boolean same(int[] arr1, int[] arr2)
    {
        int result1 = 0;
        int countUnique1 = 0;
        int count1 = 0;
        int result2 = 0;
        int countUnique2 = 0;
        int count2 = 0;
        for (int i = 0; i < arr1.length; i++)
        {
            countUnique1++;
            for (int j = i + 1; j < arr1.length; j++)
            {
                if (arr1[j] == arr1[i])
                {
                    count1++;
                    break;
                }
            }
        }
        result1 = countUnique1 - count1;
        for (int k = 0; k < arr2.length; k++)
        {
            countUnique2++;
            for (int l = k + 1; l < arr2.length; l++)
            {
                if (arr2[l] == arr2[k])
                {
                    count2++;
                    break;
                }
            }
        }
        result2 = countUnique2 - count2;
        return (result1 == result2);
    }

    public static boolean isKaprekar(int n)
    {
        int left = 0;
        int right = 0;
        int count = 0;
        int square = (int)Math.pow((double)n, 2);
        int len = String.valueOf(Math.abs(square)).length();
        int[] array = new int[len];
        for (int i = len - 1; i >=0; i--)
        {
            array[i] = square%10;
            square = (int)square/10;
        }
        for (int j = 0; j < (int)len/2; j++)
        {
            count = (int)len/2 - j - 1;
            left += array[j] * (int)Math.pow(10,count);
        }
        for (int k = (int)len/2; k < len; k++)
        {
            count = len - k - 1;
            right += array[k] * (int)Math.pow(10,count);
        }
        return (left + right == n);
    }

    public static String longestZero(String s)
    {
        int len = s.length();
        int sum;
        int sum_pred = 0;
        int i = 0;
        String s1 = "";
        while (i < len)
        {
            sum = 0;
            while (s.charAt(i) != '0' && i < len - 1)
                i++;
            while (s.charAt(i) == '0' && i < len - 1)
            {
                sum++;
                i++;
            }
            if (i == len - 1)
            {
                if (s.charAt(i) == '0')
                    sum++;
                i++;
            }
            if (sum > sum_pred)
                sum_pred = sum;
        }
        for (int k = 0; k < sum_pred; k++)
            s1 += "0";
        return (s1);
    }

    public static int nextPrime(int n)
    {
        int i = 2;
        if (n == 1)
            n++;
        while (i < n)
        {
            if (n % i == 0)
            {
                i = 2;
                n++;
            }
            i++;
        }
        return (n);
    }

    public static boolean rightTriangle(int a, int b, int c)
    {
        int min1 = a;
        int min2 = b;
        int max = c;

        if (min1 > max)
        {
            max = a;
            min1 = c;
        }
        if (min2 > max)
        {
            max = b;
            min2 = c;
        }
        return(Math.pow(max, 2) == Math.pow(min1, 2) + Math.pow(min2, 2));
    }
}
