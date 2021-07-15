using System;

class Shit
{
    static void Main()
    {
        int[] numbers = new int[50];
        Console.WriteLine("Enter 50 numbers:");

        for (int i = 0; i < numbers.Length; i++)
        {
            numbers[i] = int.Parse(Console.ReadLine());
        }

        int max;
        int total = 0;
        int min = max = numbers[0];
        foreach (int number in numbers)
        {
            if (number <= min)
            {
                min = number;
            }

            if (number > max)
            {
                max = number;
            }

            total += number;
        }

        double avg = total / numbers.Length;

        Console.WriteLine("The Highest is: " + max);
        Console.WriteLine("The Lowest is: " + min);
        Console.WriteLine("The Average is: " + avg);
    }
}