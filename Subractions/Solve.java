import java.util.Scanner;
public class Solve
{
   public static void main(String[] args)
   {
       int t, a, b;
       Scanner input = new Scanner (System.in);
       t = input.nextInt();
       for (int i= 0; i< t; i++)
       {
           a = input.nextInt();
           b = input.nextInt();
           int ops = 0;
           while (a > 0 && b > 0)
           {
               if (a > b)
               {
                   int temp = a;
                   a = b;
                   b = temp;
               }
               ops += b/ a;
               b -= a * (b/a);
           }
           System.out.println(ops);
       }

    }
}
