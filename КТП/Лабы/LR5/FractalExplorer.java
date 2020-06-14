package com.company;
import javax.swing.*;
import javax.swing.filechooser.FileFilter;
import javax.swing.filechooser.FileNameExtensionFilter;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.geom.Rectangle2D;
import java.awt.image.BufferedImage;
import java.io.File;
import javax.imageio.ImageIO;

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
        JFrame JimageDisplay = new JFrame("Fractal Explorer");
        JimageDisplay.add(display_image, BorderLayout.CENTER);
        JButton resetButton = new JButton("Reset Image");
        ButtonHandler handler = new ButtonHandler();
        resetButton.addActionListener(handler);
        JimageDisplay.add(resetButton, BorderLayout.SOUTH);

        MouseHandler click = new MouseHandler();
        display_image.addMouseListener(click);
        JimageDisplay.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JComboBox ComboBox = new JComboBox();
        FractalGenerator mandelbrotFractal = new Mandelbrot();
        ComboBox.addItem(mandelbrotFractal);
        FractalGenerator tricornFractal = new Tricorn();
        ComboBox.addItem(tricornFractal);
        FractalGenerator burningShipFractal = new BurningShip();
        ComboBox.addItem(burningShipFractal);
        ButtonHandler fractalChooser = new ButtonHandler();
        ComboBox.addActionListener(fractalChooser);
        JPanel DisplayPanel = new JPanel();
        JLabel myLabel = new JLabel("Fractal:");
        DisplayPanel.add(myLabel);
        DisplayPanel.add(ComboBox);
        JimageDisplay.add(DisplayPanel, BorderLayout.NORTH);
        JButton saveButton = new JButton("Save Image");
        JPanel myBottomPanel = new JPanel();
        myBottomPanel.add(saveButton);
        myBottomPanel.add(resetButton);
        JimageDisplay.add(myBottomPanel, BorderLayout.SOUTH);

        ButtonHandler saveHandler = new ButtonHandler();
        saveButton.addActionListener(saveHandler);

        JimageDisplay.pack();
        JimageDisplay.setVisible(true);
        JimageDisplay.setResizable(false);
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
                    display_image.drawPixel(x, y, 0);
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
            if (e.getSource() instanceof JComboBox)
            {
                JComboBox mySource = (JComboBox) e.getSource();
                fractal = (FractalGenerator) mySource.getSelectedItem();
                fractal.getInitialRange(range);
                drawFractal();
            }
            else if (command.equals("Reset Image"))
            {
                fractal.getInitialRange(range);
                drawFractal();
            }
            else if (command.equals("Save Image"))
            {
                JFileChooser myFileChooser = new JFileChooser();
                FileFilter extensionFilter = new FileNameExtensionFilter("PNG Images", "png");
                myFileChooser.setFileFilter(extensionFilter);
                myFileChooser.setAcceptAllFileFilterUsed(false);
                int userSelection = myFileChooser.showSaveDialog(display_image);
                if (userSelection == JFileChooser.APPROVE_OPTION)
                {
                    File file = myFileChooser.getSelectedFile();
                    String file_name = file.toString();
                    try
                    {
                        BufferedImage displayImage = display_image.getImage();
                        ImageIO.write(displayImage, "png", file);
                    }
                    catch (Exception exception)
                    {
                        JOptionPane.showMessageDialog(display_image, exception.getMessage(), "Cannot Save Image", JOptionPane.ERROR_MESSAGE);
                    }
                }
                else return;
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
