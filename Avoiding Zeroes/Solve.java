import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
public class Solve
{
     static void printPos(ArrayList<Integer> a)
    {
        int i = a.size()-1;
        while (i >= 0 && a.get(i) > 0)
        {
            System.out.print(a.get(i) +  " " );
            i--;
        }
    }
    static void printNeg(ArrayList<Integer> a, int zeroes)
    {
        int i = 0;
        while (i < a.size() && a.get(i) < 0)
        {
            System.out.print(a.get(i) + " " );
            i++;
        }
        for (int j= 0; j < zeroes ;j++)
        {
            System.out.print(0 + " " );
        }
    }
   public static void main(String[] args)
   {
      Scanner input = new Scanner(System.in);
      int t, size;
      t = input.nextInt();
      for (int i = 0; i< t; i++)
      {
          size = input.nextInt();
          int posSum = 0, negSum = 0, zeroes = 0,  temp;
          ArrayList<Integer> a = new ArrayList();
          for (int j = 0; j< size; j++)
          {
              temp = input.nextInt();
              a.add(temp);
              if (a.get(a.size()-1) > 0)
                posSum  +=  a.get(a.size()-1);
              else if (a.get(a.size()-1) < 0)
                  negSum += a.get(a.size()-1);
              else
                    zeroes++;
          }
          if(posSum + negSum == 0)
            System.out.println("NO");
          else
          {
              System.out.println("Yes");
              Collections.sort(a);
              if (posSum > Math.abs(negSum))
              {
                  printPos(a);
                  printNeg(a, zeroes);
              }
              else
              {
                  printNeg(a, zeroes);
                  printPos(a);
              }
              System.out.println();
          }
      }

    }
}
