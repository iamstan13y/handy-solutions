using Internal;
using System;

class Music
{
    static void Main()
    {
        Random rand = new Random();
        for (int i = 0; i <= 100; i++)
        {
            Console.Beep(600, 350);
        }
    }
}