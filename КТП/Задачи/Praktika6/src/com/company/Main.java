package com.company;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        System.out.println("1) " + bell(5));
        System.out.println("2.1) " + translateWord("flag"));
        System.out.println("2.2) " + translateSentence("do you think it is going to rain today?"));
        System.out.println("3) " + validColor("rgba(0,0,0,0.123456789)"));
        System.out.println("4) " + stripUrlParams("https://edabit.com?a=1&b=2&a=2", "b"));
        System.out.print("5) ");
        getHashTags("Hey Parents, Surprise, Fruit Juice Is Not Fruit");
        System.out.println();
        System.out.println("6) " + ulam(9));
        System.out.println("7) " + longestNonrepeatingSubstring("aaaaaa"));
        System.out.println("8) " + convertToRoman(1254));
        System.out.println("9) " + formula("16 * 10 = 160 = 40 + 120"));
        System.out.println("10) " + palindromedescendant(13001120));
    }
    public static int factorial(int n) //вспомогательная функция вычисления факториала
    {
        if (n < 0)
            return (0);
        if (n == 0)
            return (1);
        else
            return (n * factorial(n - 1));
    }

    public static int combination(int n, int k) //вспомогательная функция вычисления сочитаний из n по k
    {
        return (factorial(n) / (factorial(n - k) * factorial(k)));
    }

    public static int stirling(int n, int k) //вспомогательная функция вычисления числа Стирлинга 2-го порядка
    {
        double S = 0;
        double minus;
        double powj;

        for (int j = 1; j <= k; j++)
        {
            minus = Math.pow((-1), (k + j));
            powj = Math.pow(j, n);
            S += minus * combination(k, j) * powj;
        }
        S /= factorial(k);
        return ((int)S);
    }
    public static int bell(int n)
    {
        int S = 0;
        if (n == 0 || n == 1)
            return 1;
        for (int k = 1; k <= n; k++)
            S += stirling(n, k);
        return (S);
    }


    public static String translateWord (String s)
    {
        if (s.isBlank())
            return s;
        if  (String.valueOf(s.charAt(0)).matches("[aeyuioAEYUIO]"))
            return s + "yay";
        else
        {
            while(!String.valueOf(s.charAt(0)).matches("[aeyuioAEYUIO]"))
            {
                String sym = s.substring(0, 1);
                s = s.substring(1) + sym.toLowerCase();
            }
            return s + "ay";
        }
    }
    public static String translateSentence (String s)
    {
        StringBuilder res = new StringBuilder();

        String s1 = String.valueOf(s.charAt(s.length() - 1));
        if  (s1.matches("[.!?]"))
        {
            s = s.substring(0, s.length()-2);
        }
        String[] each = s.split(" ");
        for (String word : each)
        {
            word = translateWord(word);
            if (!word.toLowerCase().equals(word))
            {
                word = word.toLowerCase();
                word = word.substring(0,1).toUpperCase() + word.substring(1);
            }
            res.append(word).append(" ");
        }
        return res.toString();
    }

    public static boolean validColor(String s)
    {
        String number;
        String[] subStr;
        int color;
        double opacity;
        if (s.contains("rgb") || s.contains("rgba"))
        {
            if (s.contains("rgba"))
                number = s.substring(5,s.length() - 1);
            else
                number = s.substring(4,s.length() - 1);
            subStr = number.split(",");
            for (int i = 0; i < 3; i++)
            {
                if (!subStr[i].equals(""))
                    color = Integer.parseInt(subStr[i]);
                else
                    return false;
                if (!(color < 256 && color >= 0))
                    return false;
            }
            if (s.contains("rgba"))
            {
                if (!subStr[3].equals(""))
                    opacity = Double.parseDouble(subStr[3]);
                else
                    return false;
                return opacity <= 1 && opacity >= 0;
            }
        }
        return true;
    }

    public static String stripUrlParams(String url, String ...param)
    {
        StringBuilder s = new StringBuilder();
        Map<String, String> map = new HashMap<>();
        String[] sub_wb = url.split("\\?");
        s.append(sub_wb[0]);
        if (sub_wb.length!=1)
        {
            sub_wb = sub_wb[1].split("&");
            for (String value : sub_wb)
            {
                String[] pair = value.split("=");
                if (map.containsKey(pair[0]))
                    map.replace(pair[0], pair[1]);
                else map.put(pair[0], pair[1]);
            }
            s.append("?");
        }
        for (String pam : param)
            map.remove(pam);
        for (String key : map.keySet())
            s.append(key).append("=").append(map.get(key)).append("&");
        return s.substring(0,s.length()-1);
    }

    public static void getHashTags(String s)
    {
        s = s.toLowerCase();
        String temp;
        String[] subStr = s.split(" ");
        int len = subStr.length;
        String[] rez;
        for (int i = 0; i < len; i++)
        {
            if (subStr[i].contains(","))
                subStr[i] = subStr[i].substring(0,subStr[i].length() - 1);
        }
        for (int j = 1; j < len; j++)
        {
            for (int i = len - 1; i >= j; i--)
            {
                if (subStr[i - 1].length() < subStr[i].length())
                {
                    temp = subStr[i - 1];
                    subStr[i - 1] = subStr[i];
                    subStr[i] = temp;
                }
            }
        }
        if (len <= 3)
            rez = new String[len];
        else
            rez = new String[3];
        System.arraycopy(subStr, 0, rez, 0, rez.length);
        for (String value : rez) System.out.print("#" + value + " ");
    }
    public static int ulam(int n)
    {
        Vector<Integer> num_ulam = new Vector<Integer>();
        num_ulam.add(1);
        num_ulam.add(2);

        for (int i = 3; i < 2147483647; i++)
        {
            int count = 0;
            for (int j = 0; j < num_ulam.size() - 1; j++)
            {
                for (int k = j + 1; k < num_ulam.size(); k++)
                {
                    if (num_ulam.get(j) + num_ulam.get(k) == i)
                        count++;
                    if (count > 1)
                        break;
                }
                if (count > 1)
                    break;
            }
            if (count == 1)
                num_ulam.add(i);
            if (num_ulam.size() == n)
                break;
        }
        return (num_ulam.get(n - 1));
    }

    private static boolean symbols(String s)
    {
        if (s.length() == 0)
            return false;
        for(int i = 0; i < s.length(); i++)
        {
            for(int j = 0; j < s.length(); j++)
            {
                if (i == j)
                    continue;
                if (s.charAt(i) == s.charAt(j))
                    return false;
            }
        }
        return true;
    }
    private static String longestNonrepeatingSubstring(String str)
    {
        StringBuilder s1;
        String rez = "";
        for(int j = 0; j < str.length(); j++)
        {
            s1 = new StringBuilder();
            for (int i = j; i < str.length(); i++)
            {
                if (i == 0)
                    s1.append(str.charAt(i));
                else
                {
                    while (symbols(s1.toString()))
                    {
                        if (str.charAt(i) != str.charAt(i-1))
                            s1.append(str.charAt(i));
                        if(i != str.length()-1)
                            i++;
                        String r = s1.toString();
                        r += str.charAt(i);
                        if (!symbols(r))
                            break;
                    }
                    if(s1.length() > rez.length())
                        rez = s1.toString();
                    break;
                }
            }
        }
        return (rez);
    }

    public static String convertToRoman(int n)
    {
        String []one = new String[] {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        String []ten = new String[] {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        String []hund = new String[] {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        String []thous = new String[] {"", "M", "MM", "MMM"};
        String rez = "";
        if (n / 1000 != 0) {
            rez += thous[n / 1000];
            n %= 1000;
        }
        if (n / 100 != 0) {
            rez += hund[n / 100];
            n %= 100;
        }
        if (n / 10 != 0)
        {
            rez += ten[n / 10];
            n %= 10;
        }
        rez += one[n];
        return (rez);
    }

    public static boolean formula(String s)
    {
        String[] subStr = s.split(" = ");
        String[] num = new String[2];
        double a;
        double b;
        Vector<Double> sum = new Vector<Double>();
        for (int i = 0; i < subStr.length; i++)
        {
            if (subStr[i].contains("/"))
            {
                num = subStr[i].split(" / ");
                a = Double.parseDouble(num[0]);
                b = Double.parseDouble(num[1]);
                sum.add(a / b);
            }
            else if (subStr[i].contains("*"))
            {
                num = subStr[i].split(" \\* ");
                a = Double.parseDouble(num[0]);
                b = Double.parseDouble(num[1]);
                sum.add(a * b);
            }
            else if (subStr[i].contains(" + "))
            {
                num = subStr[i].split(" \\+ ");
                a = Double.parseDouble(num[0]);
                b = Double.parseDouble(num[1]);
                sum.add(a + b);
            }
            else if (subStr[i].contains(" - "))
            {
                num = subStr[i].split(" - ");
                a = Double.parseDouble(num[0]);
                b = Double.parseDouble(num[1]);
                sum.add(a - b);
            }
            else
                sum.add(Double.parseDouble(subStr[i]));
        }
        for (int i = 0; i < sum.size() - 1; i++)
        {
            if (!sum.get(i).equals(sum.get(i + 1)))
                return false;
        }
        return true;
    }

    public static boolean palindromes(String s)
    {
        int len = s.length();
        for (int i = 0; i < len / 2; i++)
        {
            if (s.charAt(i) != s.charAt(len - i - 1))
                return false;
        }
        return true;
    }
    public static boolean palindromedescendant(int n)
    {
        String s = String.valueOf(n);
        String temp;
        int a;
        int b;
        while (!palindromes(s) && s.length() > 1)
        {
            temp = "";
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (i % 2 == 1)
                    continue;
                a = s.charAt(i) - '0';
                b = s.charAt(i + 1) - '0';
                temp += String.valueOf(a + b);
            }
            s = temp;
        }
        return palindromes(s) && s.length() > 1;
    }
}
