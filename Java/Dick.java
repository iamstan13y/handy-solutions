import java.util.Random;

public class Dick
{
    public static void main(String[] args)
    {
        Random dick = new Random();

        for (int i = 0; i <= 5; i++)
        {
            System.out.println(dick.nextInt(10));
        }
    }
}