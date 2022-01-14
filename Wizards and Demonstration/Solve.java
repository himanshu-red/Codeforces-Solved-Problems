import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
import java.lang.Math;
public class Solve
{
   public static void main(String[] args)
   {
       Scanner input = new Scanner (System.in);
       int n = input.nextInt(); // total population
       int x = input.nextInt(); // no of wizards
       int y = input.nextInt(); // percentage needed
       double perc = Math.ceil(n * (y / (double)100));
       if (perc > x)
           System.out.println((int)(Math.ceil(perc - x))) ;
       else
           System.out.println("0");
    }
}
