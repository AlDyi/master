package com.company;

import java.nio.charset.StandardCharsets;
import java.security.NoSuchAlgorithmException;
import java.security.MessageDigest;

public class Main {

    public static void main(String[] args) throws NoSuchAlgorithmException
    {
        System.out.print("1.1) ");
        encrypt("Sunshine");
        System.out.println("1.2) " + decrypt(new int[] {72, 33, -73, 84, -12, -3, 13, -13, -68}));
        System.out.println("2) " + canMove("Knight", "E5", "G6"));
        System.out.println("3) " + canComplete("btifu", "beautiful"));
        System.out.println("4) " + sumDigProd(new int[] {1, 2, 3, 4, 5, 6}));
        System.out.print("5) ");
        sameVowelGroup(new String[] {"toe", "ocelot", "maniac"});
        System.out.println("6) " + validateCard(1234567890123452L));
        System.out.println("7) " + numToeng(606));
        System.out.println("8) " + getSha256Hash("123Password"));
        System.out.println("9) " + correctTitle("TYRION LANNISTER, HAND OF THE QUEEN."));
        System.out.println("10)");
        System.out.println(hexLattice( 91));
    }

    public static int[] encrypt(String s)
    {
        int[] array = new int[s.length()];
        for (int i = 0; i < s.length(); i++)
        {
            if (i == 0)
                array[i] = (int)s.charAt(i);
            else
                array[i] = (int)(s.charAt(i) - s.charAt(i - 1));
            System.out.print(array[i] + " ");
        }
        System.out.println();
        return(array);
    }

    public static String decrypt(int[] array)
    {
        StringBuilder s = new StringBuilder();
        for (int i = 0; i < array.length; i++)
        {
            if (i == 0)
                s.append((char) (array[i]));
            else
                s.append((char) ((int) s.charAt(i - 1) + array[i]));
        }
        return (s.toString());
    }

    public static boolean canMove(String figure, String begin, String end)
    {
        int end_begin0 = (int)(end.charAt(0) - begin.charAt(0));
        int end_begin1 = (int)(end.charAt(1) - begin.charAt(1));
        if (figure.contains("Pawn")) //--------------Пешка-----------------
            return begin.charAt(0) == end.charAt(0) && end_begin1 == 1;
        if (figure.contains("Rook") || figure.contains("Queen")) //-----------Ладья и Ферзь по вертикали и горизонтали------------
        {
            if (begin.charAt(0) == end.charAt(0))
                return true;
            if (begin.charAt(1) == end.charAt(1))
                return true;
        }
        if (figure.contains("Bishop") || figure.contains("Queen")) //---------------Слон и Ферзь по диагоналям--------------
            return Math.abs(end_begin0) == Math.abs(end_begin1);
        if (figure.contains("King")) // -------------Король------------------
        {
            if (begin.charAt(0) == end.charAt(0) && Math.abs(end_begin1) == 1) // по вертикали на 1
                return true;
            if (begin.charAt(1) == end.charAt(1) && Math.abs(end_begin0) == 1) // по горизонтали на 1
                return true;
            return Math.abs(end_begin0) == 1 && Math.abs(end_begin1) == 1; //по диагонали на 1
        }
        if (figure.contains("Knight")) //----------------------Конь-------------------------
        {
            return((Math.abs(end_begin0) == 2 && Math.abs(end_begin1) == 1) ||
                    (Math.abs(end_begin1) == 2 && Math.abs(end_begin0) == 1));
        }
        return false;
    }
    public static boolean canComplete(String words, String full)
    {
        int j = 0;
        for (int i = 0; i < words.length(); i++)
        {
            if (full.indexOf((char) words.charAt(i), j) == -1)
                return false;
            j = full.indexOf((char) words.charAt(i), j) + 1;
        }
        return true;
    }

    public static int sumDigProd(int[] array)
    {
        int multi = 1;
        int n = 0;
        for (int value : array) n += value;
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
            }
        }
        return (multi);
    }

    public static String[] sameVowelGroup(String[] s)
    {
        String letter1 = "";
        String[] subStr;
        int count = 0;
        StringBuilder index = new StringBuilder();

        if (s[0].contains("a"))
            letter1 += "a";
        if (s[0].contains("e"))
            letter1 += "e";
        if (s[0].contains("i"))
            letter1 += "i";
        if (s[0].contains("o"))
            letter1 += "o";
        if (s[0].contains("u"))
            letter1 += "u";
        if (s[0].contains("y"))
            letter1 += "y";
        for (int i = 0; i < s.length; i++)
        {
            for (int j = 0; j < letter1.length(); j++)
            {
                if (s[i].contains(String.valueOf(letter1.charAt(j))))
                    count++;
            }
            if (count == letter1.length())
                index.append(String.valueOf(i));
            count = 0;
        }
        subStr = new String[index.length()];
        for (int k = 0; k < index.length(); k++)
        {
            subStr[k] = s[Integer.parseInt(String.valueOf(index.charAt(k)))];
            System.out.print(subStr[k] + " ");
        }
        System.out.println();
        return subStr;
    }

    public static boolean validateCard(long number)
    {
        int check_digit = (int)(number % 10);
        String revers_number = "";
        String num = String.valueOf(number);
        int[] sum;
        int elem;
        int sum_elem = 0;
        if (num.length() < 14 || num.length() > 19)
            return false;
        num = num.substring(0, num.length() - 1);
        for (int i = 0; i < num.length(); i++)
            revers_number += num.charAt(num.length() - 1 - i);
        sum = new int[revers_number.length()];
        for (int j = 0; j < sum.length; j++)
        {
            elem = Integer.parseInt(String.valueOf(revers_number.charAt(j)));
            if (j % 2 == 0)
            {
                if (elem * 2 > 9)
                    sum[j] = (elem * 2) % 10 + (elem * 2) / 10;
                else
                    sum[j] = elem * 2;
            }
            else
                sum[j] = elem;
            sum_elem += sum[j];
        }
        return (10 - (sum_elem % 10) == check_digit);
    }

    public static String numToeng(int n)
    {
        if(n < 0 || n > 999)
            return "Error";
        String s = "";
        String[] digit = {"zero", "one", "two","three","four","five","six","seven","eight","nine"};
        String[] digit_r = {"ноль", "один", "два","три","четыре","пять","шесть","семь","восемь","девять"};
        String[] ten = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
        String[] ten_r = {"десять", "одинадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
        String[] two_digit = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        String[] two_digit_r = {"","","двадцать","тридцать","сорок","пятьдесят","шестьдесят","семьдесят","восемьдесят","девяносто"};
        String[] three_digit_r = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот"};
        if (n < 10)
            return (digit[n] + "\n   " + digit_r[n]);
        else if (n < 20)
            return (ten[n - 10] + "\n   " + ten_r[n - 10]);
        else if (n < 100)
        {
            if (n % 10 != 0)
                return (two_digit[n / 10] + " " + digit[n % 10] + "\n   " + two_digit_r[n / 10] + " " + digit_r[n % 10]);
            else
                return (two_digit[n / 10] + "\n   " + two_digit_r[n / 10]);
        }
        else
        {
            if ((n % 100) / 10 == 1)
                return (digit[n / 100] + " hundred " + ten[n % 10] + "\n   " + three_digit_r[n / 100] + " " + ten_r[n % 10]);
            else if (n % 100 == 0)
                return (digit[n / 100] + " hundred" + "\n   " + three_digit_r[n / 100]);
            else if ((n % 100) / 10 == 0)
                return (digit[n / 100] + " hundred " + digit[n % 10] + "\n   " +
                        three_digit_r[n / 100] + " " + digit_r[n % 10]);
            else if (n % 10 != 0)
                return (digit[n / 100] + " hundred " + two_digit[(n % 100) / 10] + " " + digit[n % 10] + "\n   " +
                        three_digit_r[n / 100] + " " + two_digit_r[(n % 100) / 10] + " " + digit_r[n % 10]);
            else
                return (digit[n / 100] + " hundred " + two_digit[(n % 100) / 10] + "\n   " + three_digit_r[n / 100] +
                        " " + two_digit_r[(n % 100) / 10]);
        }
    }

    private static String getSha256Hash(String s) throws NoSuchAlgorithmException
    {
        MessageDigest mD = MessageDigest.getInstance("SHA-256");
        byte[]hash_bytes = mD.digest(s.getBytes(StandardCharsets.UTF_8));
        StringBuilder hash = new StringBuilder();
        for(byte p : hash_bytes)
            hash.append(String.format("%02x",p));
        return (hash.toString());
    }

    private static String correctTitle(String s)
    {
        s = s.toLowerCase();
        String total_s = "";
        String[] substr = s.split(" ");
        for (int i = 0; i < substr.length; i++)
        {
            if (substr[i].equals("and") || substr[i].equals("the") || substr[i].equals("of") || substr[i].equals("in"))
            {
                total_s += substr[i] + " ";
                continue;
            }
            else
                total_s += Character.toUpperCase(substr[i].charAt(0));
            for (int j = 1; j < substr[i].length(); j++)
                total_s += substr[i].charAt(j);
            if (i != substr.length - 1)
                total_s += " ";
        }
        return(total_s);
    }

    public static String hexLattice(int n)
    {
        int c = (n - 1)/3;
        int D = 1 + 4 * c;
        int k = (int)(1 + Math.sqrt((double)D))/2;
        int h = (k * 2) - 1;
        int k1 = 0;
        int space = 0;
        String figure = "";
        int i = 1;
        int j = 0;
        if (n % 6 - 1 != 0)
            return ("Invalid");
        if (n == 1)
            return (" o ");
        while (i <= h / 2 + 1)
        {
            space = k - i - j;
            k1 = k;
            while (space-- > 0)
                figure += " ";
            while (k1-- > 0)
                figure += "o ";
            figure += '\n';
            k++;
            i++;
            j++;
        }
        i = h / 2 + 1;
        k--;
        space = 0;
        while (i < h)
        {
            j = 0;
            space++;
            k1 = k - 1;
            while (j++ < space)
                figure += " ";
            while (k1-- > 0)
                figure += "o ";
            figure += '\n';
            i++;
            k--;
        }
        return (figure);
    }
}
