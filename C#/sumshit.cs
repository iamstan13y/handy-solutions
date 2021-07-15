using System;

class Shit
{
    static void Main()
    {
        int total = 0;

        for (int shit = 0; shit <= 20; shit++)
        {
            if (shit % 2 == 0)
            {
                total += shit;
            }
        }

        Console.WriteLine("Total of all even numbers: " + total);
    }
}