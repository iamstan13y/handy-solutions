using System;

public class Fibonacci
{
    public static void Main()
    {
        int number, result;
        Console.WriteLine("Enter number of elements to calculate Fibonacci:");
        number = int.Parse(Console.ReadLine());
        
        result = calculate(number);
        Console.WriteLine("The sequence: " + result);
    }

    public void calculate(int number)
    {
        if (number == 0 || number == 1)
        {
             number;
        }
        else
        {
            return calculate(number - 1) + calculate(number - 2); 
        }
    }
}