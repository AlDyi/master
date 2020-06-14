package com.company;
import java.awt.geom.Rectangle2D;

public class BurningShip extends FractalGenerator
{
    public static final int MAX_ITERATIONS = 2000;

    /** Method allows the generator fractals to determine
     * the most “interesting” area of ​​the complex plane
     * for a specific fractal */
    public void getInitialRange(Rectangle2D.Double range)
    {
        range.x = -2;
        range.y = -2.5;
        range.width = 4;
        range.height = 4;
    }
    /** The method implements an iterative function for the Burning ship's fractal. */
    public int numIterations(double x, double y)
    {
        double Re = 0;
        double Im = 0;

        for(int i = 0; i < MAX_ITERATIONS; i++)
        {
            if (Math.pow(Re, 2) + Math.pow(Im, 2) > 4)
                return i;
            double next_Re = Math.pow(Re, 2) - Math.pow(Im, 2) + x;
            double next_Im = 2 * Math.abs(Re * Im) + y;

            Re = next_Re;
            Im = next_Im;
        }
        return -1;
    }

    public String toString()
    {
        return ("Burning ship");
    }
}
