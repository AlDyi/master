package com.company;

import javax.accessibility.AccessibleTable;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args)
    {
        System.out.print("1) ");
        BessiesMachine(12, 8, "hello my name is Sam and this is my the greatest essay");
        System.out.print("2) ");
        split("((())())(()(()()))");
        System.out.println();
        System.out.println("3.1) " + toCamelCase("hello_edabit"));
        System.out.println("3.2) " + toSnakeCase("getColor"));
        System.out.println("4) " + overTime(13.25, 15, 30, 1.5));
        System.out.println("5) " + BMI("154 pounds", "2 meters"));
        System.out.println("6) " + bugger(9));
        System.out.println("7) " + toStarShorthand("77777geff"));
        System.out.println("8) " + doesRhyme("Sam I am!", "Green eggs and ham."));
        System.out.println("9) " + trouble(666789, 12345667));
        System.out.println("10) " + countUniqueBooks("AZYWABBCATTTA", 'A'));
    }
    public static void BessiesMachine(int n, int k, String s)
    {
        String[] subStr;
        String s1 = "";
        int i = 0;
        int count = 0;
        subStr = s.split(" ");
        while (i < n)
        {
            while ((s1.length() <= k) && (i < n))
            {
                s1 += subStr[i];
                if (s1.length() <= k)
                    System.out.print(subStr[i]);
                else
                    System.out.println();
                if (i < n - 1)
                    if ((s1.length() + subStr[i + 1].length()) <= k)
                        System.out.print(" ");
                i++;
            }
            s1 = "";
            if (i == n)
                count++;
            if (count == 2)
            {
                System.out.println();
                break;
            }
            i--;
        }
    }

    public  static String[] split(String s)
    {
        String[] subs;
        String s2 = "";
        int i = 0;
        int h = 0;
        int count_begin = 0;
        int count_end = 0;
        while (i < s.length())
        {
            count_begin = 0;
            count_end = 0;
            h = s.indexOf(")(", h);
            while ((i <= h && h > 0) || (h < 0 && i < s.length()))
            {
                if (s.charAt(i) == '(')
                    count_begin++;
                else
                    count_end++;
                i++;
            }
            i = i - count_begin - count_end;
            if (count_begin == count_end && count_begin != 0)
            {
                if (h > 0)
                {
                    while (i <= h)
                    {
                        s2 += s.charAt(i);
                        i++;
                    }
                }
                else
                {
                    while (i < s.length())
                    {
                        s2 += s.charAt(i);
                        i++;
                    }
                    break ;
                }
                s2 += " ";
                i = h + 1;
            }
            h++;
        }
        subs = s2.split(" ");
        for (int j = 0; j < subs.length; j++)
            System.out.print("[" + subs[j] + "] ");
        return (subs);
    }

    public static String toCamelCase(String s)
    {
        String[] subStr;
        subStr = s.split("_");
        String s1 = "";
        int len = subStr.length;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
                s1 += subStr[i];
            else
            {
                s1 += (char)(subStr[i].charAt(0) - 32);
                for (int j = 1; j < subStr[i].length(); j++)
                    s1 += subStr[i].charAt(j);
            }
        }
        return (s1);
    }

    public static String toSnakeCase(String s)
    {
        String s1 = "";
        int len = s.length();
        int i = 0;
        while (i < len)
        {
            if (!(s.charAt(i) > 'A' && s.charAt(i) < 'Z'))
                s1 += s.charAt(i);
            else
            {
                s1 += "_";
                s1 += (char) (s.charAt(i) + 32);
            }
            i++;
        }
        return (s1);
    }

    public static String overTime(double begin, double end, double price, double proc)
    {
        double sum = 0;
        double over = 0;
        DecimalFormat total = new DecimalFormat("#.##");
        String s;
        if (end <= 17)
            sum = (end - begin) * price;
        else
        {
            sum = (17 - begin) * price;
            over = (end - 17) * price * proc;
        }
        s = "$" + String.valueOf(total.format(sum + over));
        return (s);
    }

    public static String BMI(String weight, String height)
    {
        double Weight;
        double Height;
        double bmi;
        String total_bmi = "";
        DecimalFormat total = new DecimalFormat("#.#");
        if (weight.contains("pounds"))
            Weight = Double.parseDouble(weight.replaceAll(" pounds", "")) * 0.45;
        else
            Weight = Double.parseDouble(weight.replaceAll(" kilos", ""));
        if (height.contains("meters"))
            Height = Double.parseDouble(height.replaceAll(" meters", ""));
        else
            Height = Double.parseDouble(height.replaceAll(" inches", "")) * 0.0253;
        bmi = Weight/Math.pow(Height, 2);
        total_bmi = String.valueOf(total.format(bmi));
        if (bmi < 18.5)
            total_bmi += " Underweight";
        else if (bmi >= 25)
            total_bmi += " Overweight";
        else
            total_bmi += " Normal weight";
        return  (total_bmi);
    }

    public static int bugger(int n)
    {
        int multi = 1;
        int i = 1;

        if (n < 10)
            return 0;
        while (multi > 0 && n != 0)
        {
            multi = multi * (n % 10);
            n = n / 10;
            if ((n == 0) && (multi > 9))
            {
                n = multi;
                multi = 1;
                i++;
            }
        }
        return (i);
    }

    public static String toStarShorthand(String s)
    {
        String s1 = "";
        int i = 0;
        int count = 1;
        while (i < s.length())
        {
            if (i < s.length() - 1)
            {
                while ((i < s.length() - 1) && s.charAt(i) == s.charAt(i + 1))
                {
                    i++;
                    count++;
                }
                if (count == 1)
                    s1 += s.charAt(i);
                else {
                    s1 += (s.charAt(i) + "*" + String.valueOf(count));
                    count = 1;
                }
                i++;
            }
            if (i == s.length() - 1 && s.length() == 1)
                return (s);
            if (i == s.length() - 1 && (s.charAt(i) != s.charAt(i - 1)))
            {
                s1 += s.charAt(i);
                i++;
            }
        }
            return (s1);
    }

    public static boolean doesRhyme(String s1, String s2) {
        String[] subStr1;
        String[] subStr2;
        String letter1 = "";
        String letter2 = "";
        s1 = s1.toLowerCase();
        s2 = s2.toLowerCase();
        subStr1 = s1.split(" ");
        subStr2 = s2.split(" ");
        int len1 = subStr1.length;
        int len2 = subStr2.length;
        if (subStr1[len1 - 1].contains("a"))
            letter1 += "a";
        if (subStr1[len1 - 1].contains("e"))
            letter1 += "e";
        if (subStr1[len1 - 1].contains("i"))
            letter1 += "i";
        if (subStr1[len1 - 1].contains("o"))
            letter1 += "o";
        if (subStr1[len1 - 1].contains("u"))
            letter1 += "u";
        if (subStr1[len1 - 1].contains("y"))
            letter1 += "y";
        if (subStr2[len2 - 1].contains("a"))
            letter2 += "a";
        if (subStr2[len2 - 1].contains("e"))
            letter2 += "e";
        if (subStr2[len2 - 1].contains("i"))
            letter2 += "i";
        if (subStr2[len2 - 1].contains("o"))
            letter2 += "o";
        if (subStr2[len2 - 1].contains("u"))
            letter2 += "u";
        if (subStr2[len2 - 1].contains("y"))
            letter2 += "y";
        return (letter1.equals(letter2));
    }

    public static boolean trouble(long n1, long n2)
    {
        String num1 = String.valueOf(n1);
        String num2 = String.valueOf(n2);
        String third = "";
        String twice = "";
        for (int i = 0; i < 10; i++)
        {
            third = String.valueOf(i) + String.valueOf(i) + String.valueOf(i);
            twice = String.valueOf(i) + String.valueOf(i);
            if (num1.contains(third) && num2.contains(twice))
                return true;
        }
        return false;
    }

    public static int countUniqueBooks(String s, char end)
    {
        int count = 0;
        int countUnique = 0;
        int rezult = 0;
        String s1 = "";
        int h = 0;
        int h_next = 0;
        while (h < s.length())
        {
            h = s.indexOf(end, h);
            h++;
            if ((h_next = s.indexOf(end, h)) < 0)
                break ;
            while (h < s.length() && s.charAt(h) != end && h_next > 0)
            {
                s1 += s.charAt(h);
                h++;
            }
            h++;
        }
        for (int j = 0; j < s1.length(); j++)
        {
            countUnique++;
            for (int k = j + 1; k < s1.length(); k++)
            {
                if (s1.charAt(j) == s1.charAt(k))
                {
                    count++;
                    break;
                }
            }
        }
        rezult = countUnique - count;
        return (rezult);
    }
}
