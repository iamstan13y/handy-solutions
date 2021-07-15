using System;

public class Matrix
{
    static void Main(string[] args)
{
    int[,] arr = new int[5, 5];
    int input;

    Console.WriteLine("Read a 2D array of size 5 x 5 and print the matrix");
    Console.WriteLine("--------------------------------------------------\n");

    Console.WriteLine("Input the array elements:");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            input = int.Parse(Console.ReadLine());
            arr[i, j] = input;
        }
    }

    //Output
    Console.WriteLine("\nThe Matrix:"); 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Console.Write(arr[i, j] +" ");
        }
        Console.WriteLine();
    }

    //Minimum
    int min = arr[0, 0];
    int max = arr[0, 0];
    Console.WriteLine("\nThe Max and Min:"); 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i, j] <= min)
            {
                min = arr[i, j];
            }
            else if(arr[i, j] > max)
            {
                max = arr[i, j];
            }
        }
    }
    Console.WriteLine("Min: " + min);
    Console.WriteLine("Max: " + max);
}
}