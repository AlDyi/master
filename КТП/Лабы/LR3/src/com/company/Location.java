package com.company;
/**
 * This class represents a specific location in a 2D map.  Coordinates are
 * integer values.
 **/
public class Location
{
    /** X coordinate of this location. **/
    public int xCoord;

    /** Y coordinate of this location. **/
    public int yCoord;


    /** Creates a new location with the specified integer coordinates. **/
    public Location(int x, int y)
    {
        xCoord = x;
        yCoord = y;
    }

    /** Creates a new location with coordinates (0, 0). **/
    public Location()
    {
        this(0, 0);
    }
    @Override
    public boolean equals(Object p1)
    {
        if (this == p1)
            return true;
        if (p1 == null || p1.getClass() != this.getClass())
            return false;


        Location location = (Location) p1;
        return xCoord == location.xCoord &&
                yCoord == location.yCoord;
    }
    @Override
    public int hashCode()
    {
        final int prime = 31;
        int res = 1;
        res = prime * res + xCoord;
        res = prime * res + yCoord;
        return res;
    }

}
