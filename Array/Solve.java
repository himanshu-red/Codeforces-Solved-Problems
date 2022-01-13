import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
import java.lang.Math;
public class Solve
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner (System.in);
        int size = input.nextInt();
        int temp;
        ArrayList<Integer> negatives = new ArrayList();
        ArrayList<Integer> positives = new ArrayList();
        ArrayList<Integer> zeroes = new ArrayList();
        for (int i = 0; i< size; i++)
        {
            temp = input.nextInt();
            if (temp < 0) negatives.add(temp);
            else if (temp == 0) zeroes.add(temp);
            else positives.add(temp);
        }
        if (positives.size() == 0)
        {
            positives.add(negatives.get(negatives.size()-1));
            negatives.remove(negatives.size()-1);
            positives.add(negatives.get(negatives.size()-1));
            negatives.remove(negatives.size()-1);
        }
        if (negatives.size() % 2 == 0)
        {
            zeroes.add(negatives.get(negatives.size()-1));
            negatives.remove(negatives.size()-1);
        }
        System.out.print(negatives.size() +  " " );
        for (Integer negative : negatives) System.out.print(negative + " ");
        System.out.println();
        System.out.print(positives.size() + " " );
        for (Integer positive : positives) System.out.print(positive + " ");
        System.out.println();
        System.out.print(zeroes.size() +  " ");
        for (Integer zero : zeroes) System.out.print(zero + " ");
    }
}
