package com.company;
import java.awt.*;
import javax.swing.*;
import java.awt.geom.Rectangle2D;
import java.awt.event.*;

public class FractalExplorer
{
    private int display_size; /** The integer "screen size", which is the width and height of the display in pixels */
    private JImageDisplay display_image; /** JImageDisplay's link, for updating the display in different methods in the
                                            process of calculating the fractal */
    private FractalGenerator fractal; /** FractalGenerator's object*/
    private Rectangle2D.Double range; /** Rectangle2D.Double's object, уthat indicates the range of the complex
                                            plane that is displayed */

    public FractalExplorer(int size) /**The constructor, which takes the value of the display size as an argument,
                                        then stores this value in the corresponding field, and also initializes
                                        the objects of the range and the fractal generator */
    {
        display_size = size;
        fractal = new Mandelbrot();
        range = new Rectangle2D.Double();
        fractal.getInitialRange(range);
        display_image = new JImageDisplay(display_size, display_size);
    }



    /** Swing GUI Initialization Method */
    public void createAndShowGUI()
    {
        display_image.setLayout(new BorderLayout());
        JFrame frame = new JFrame("Fractal Explorer");
        frame.add(display_image, BorderLayout.CENTER);

        //image reset button
        JButton resetButton = new JButton("Reset");
        frame.add(resetButton, BorderLayout.SOUTH);
        ButtonHandler resetHandler = new ButtonHandler();
        resetButton.addActionListener(resetHandler);

        MouseHandler click = new MouseHandler();
        display_image.addMouseListener(click);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
        frame.setResizable(false);
    }

    /** A method that must loop through each pixel in a display */
    private void drawFractal()
    {
        for (int x = 0; x < display_size; x++)
        {
            for (int y = 0; y < display_size; y++)
            {
                double xCoord = FractalGenerator.getCoord(range.x,
                        range.x + range.width, display_size, x);
                double yCoord = FractalGenerator.getCoord(range.y,
                        range.y + range.height, display_size, y);

                int num_iters = fractal.numIterations(xCoord, yCoord);

                if (num_iters == -1)
                {
                    display_image.drawPixel(x, y, 0);
                }
                else
                {
                    float hue = 0.7f + (float) num_iters / 200f;
                    int rgbColor = Color.HSBtoRGB(hue, 1f, 1f);

                    display_image.drawPixel(x, y, rgbColor);
                }
            }
        }
        display_image.repaint(); //redrawing
    }

    /** Inner class for event handling
     java.awt.event.ActionListener from reset button */
    public class ButtonHandler implements ActionListener
    {
        @Override
        public void actionPerformed(ActionEvent e)
        {
            String command = e.getActionCommand();

            if (command.equals("Reset"))
            {
                fractal.getInitialRange(range);
                drawFractal();
            }
        }
    }

    /** Inner class for handling events with a display */
    private  class MouseHandler extends MouseAdapter
    {
        @Override
        public void mouseClicked (MouseEvent e)
        {
            int x = e.getX();
            double xCoord = fractal.getCoord(range.x,
                    range.x + range.width, display_size, x);

            int y = e.getY();
            double yCoord = fractal.getCoord(range.y,
                    range.y + range.height, display_size, y);
            fractal.recenterAndZoomRange(range, xCoord, yCoord, 0.5);
            drawFractal();
        }
    }

    public static void main(String[] args)
    {

        FractalExplorer displayExplorer = new FractalExplorer(600);
        displayExplorer.createAndShowGUI();
        displayExplorer.drawFractal();
    }
}