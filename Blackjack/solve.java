import java.util.ArrayList;
import java.util.Scanner;
public class Solve
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner (System.in);
        int points = input.nextInt();
        int result = 0;
        if (points == 20) result = 15;
        if (points > 10 && points < 20) result = 4;
        if (points == 21) result = 4; // only ace is the option
        System.out.println(result);
    }
}
