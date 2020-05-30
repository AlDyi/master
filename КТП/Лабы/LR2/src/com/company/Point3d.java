package com.company;

public class Point3d
{
    private double xCoord;
    private double yCoord;
    private double zCoord;


    public Point3d(double x, double y, double z)
    {
        xCoord = x;
        yCoord = y;
        zCoord = z;
    }
    public Point3d()
    {
        this(0, 0, 0);
    }
    public double getX ()
    {
        return xCoord;
    }
    public double getY ()
    {
        return yCoord;
    }
    public double getZ ()
    {
        return zCoord;
    }
    public void setX ( double val)
    {
        xCoord = val;
    }
    public void  setY ( double val)
    {
        yCoord = val;
    }
    public void  setZ ( double val)
    {
        zCoord = val;
    }
    public static boolean equal(Point3d t1, Point3d t2)
    {
        return ((((t1.xCoord == t2.xCoord))&&(t1.yCoord == t2.yCoord))
                &&(t1.zCoord == t2.zCoord));
    }
    public static double distanceTo(Point3d t1, Point3d t2)
    {
        return Math.round((Math.sqrt(Math.pow(t2.xCoord - t1.xCoord, 2) + Math.pow(t2.yCoord - t1.yCoord, 2) +
                Math.pow(t2.zCoord - t1.zCoord, 2)))*100.0)/100.0;
    }
}