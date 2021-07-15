using System;

class MyShit
{
    static void Main()
    {
        Console.WriteLine("Enter the fucking denary number:");
        int denaryNumber = int.Parse(Console.ReadLine()); 
        String binary = "";

        while (denaryNumber != 0)
        {
            binary += denaryNumber % 2;
            denaryNumber /= 2;
        }

        Console.Write("The binary conversion is: ");
        for (int shit = binary.Length - 1; shit >= 0; shit--)
        {
            Console.Write(binary[shit]);
        }
    }
}