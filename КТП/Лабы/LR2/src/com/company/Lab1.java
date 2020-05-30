package com.company;
import java.util.Scanner;

public class Lab1 {
    public static void main(String[] ag)
    {
        System.out.println("Введите координаты первой точки через пробел");
        Scanner in = new Scanner(System.in);
        String point1 = in.nextLine();
        String[] sub_s1 = point1.split(" ");
        double x1 = Double.parseDouble(sub_s1[0]);
        double y1 = Double.parseDouble(sub_s1[1]);
        double z1 = Double.parseDouble(sub_s1[2]);

        System.out.println("Введите координаты второй точки через пробел");
        String point2 = in.nextLine();
        String[] sub_s2 = point2.split(" ");
        double x2 = Double.parseDouble(sub_s2[0]);
        double y2 = Double.parseDouble(sub_s2[1]);
        double z2 = Double.parseDouble(sub_s2[2]);

        System.out.println("Введите координаты третьей точки через пробел");
        String thirdPoint = in.nextLine();
        String[] sub_s3 = thirdPoint.split(" ");
        double x3 = Double.parseDouble(sub_s3[0]);
        double y3 = Double.parseDouble(sub_s3[1]);
        double z3 = Double.parseDouble(sub_s3[2]);

        Point3d first_point = new Point3d(x1,y1,z1);
        Point3d second_point = new Point3d(x2,y2,z2);
        Point3d third_point = new Point3d(x3,y3,z3);

        if (Point3d.equal(first_point,second_point) || Point3d.equal(first_point,third_point) || Point3d.equal(second_point,third_point))
            System.out.println("Одна из точек равна другой. Посчитать площадь невозможно!");
        else
            System.out.println(computeArea(first_point, second_point, third_point));
    }
    public static double computeArea(Point3d t1, Point3d t2, Point3d t3)
    {
        double a = Point3d.distanceTo(t1,t2);
        double b = Point3d.distanceTo(t2,t3);
        double c = Point3d.distanceTo(t3,t1);
        double p = (a+b+c)/2;
        return(Math.round((Math.sqrt(p*(p-a)*(p-b)*(p-c))*100.0))/100.0);
    }
}