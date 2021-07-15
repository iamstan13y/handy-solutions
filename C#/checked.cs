using System;

class Shit
{
    static void Main()
    {
        double d =5e9d;
        int i = checked((int)d);
        Console.WriteLine(i);
    }
}