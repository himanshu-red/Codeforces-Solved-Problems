import java.util.ArrayList;
import java.util.Scanner;
import java.lang.Math;
public class Solve
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner (System.in);
        int x, y, x1, x2, y1, y2;
        x = input.nextInt();
        y = input.nextInt();
        if (x > 0 && y > 0) // first quadrant
        {
            x1 = 0;
            y1 = x+y;
            x2 = x+y;
            y2 = 0;
        }
        else if (x < 0 && y > 0)  // second quadrant
        {
            x1 = -1 * (Math.abs(x) + Math.abs(y));
            y1 = 0;
            x2 = 0;
            y2 = Math.abs(x) + Math.abs(y);
        }
        else if (x < 0 && y < 0)  //third quadrant
        {
            x1 = -1 * (Math.abs(x) + Math.abs(y));
            y1 = 0;
            x2 = 0;
            y2 = -1 * (Math.abs(x) + Math.abs(y));
        }
        else                  //fourth quadrant
        {
            x1 = 0;
            y1 = -1 * (Math.abs(x) + Math.abs(y));
            x2 = Math.abs(x) + Math.abs(y);
            y2 = 0;
        }
        System.out.println(x1 + " " + y1 + " " + x2 + " " + y2);
    }
}
