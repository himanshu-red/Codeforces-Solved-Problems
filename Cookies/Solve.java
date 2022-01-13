import java.util.ArrayList;
import java.util.Scanner;
public class Solve
{
    public static void main(String[] args)
    {
        int size;
        int temp;
        int sum = 0;
        int totalWays = 0;
        Scanner input = new Scanner(System.in);
        size = input.nextInt();
        ArrayList<Integer> v = new ArrayList (size);
        for (int i = 0; i< size; i++)
        {
            temp = input.nextInt();
            v.add(temp);
            sum += temp;
        }
        for (int i = 0; i< size; i++)
        {
            if (((sum - v.get(i)) % 2 )== 0)
                totalWays++;
        }
        System.out.println(totalWays);
    }
}
