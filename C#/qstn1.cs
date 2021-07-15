using System;

public class Sum {

    public static void Main (string[] args) {

        string input;
        string nums = "";
        int x, sum = 0;

        Console.WriteLine ("Enter any string:");
        input = Console.ReadLine ();

        foreach (char digit in input) {

            nums += digit;
        }

        int digits = int.Parse (nums);

        while (digits > 0) {
            x = digits % 10;
            sum += x;
            digits /= 10;
        }
        Console.WriteLine ("The sum of digits in your in string is: " + sum);
    }

}