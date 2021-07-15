using System;

public class Sum {

    public static void Main () {
        int x, num, sum = 0;
        Console.WriteLine ("ENTER ANY NUMBER:\n");
        num = int.Parse (Console.ReadLine ());

        while (num > 0) {
            x = num % 10;
            sum += x;
            num /= 10;
        }
        Console.WriteLine ("Sum of the digits in the number: " + sum);

    }
}