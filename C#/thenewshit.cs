using Internal;
using System.Security.AccessControl;
using System;
using System.IO;
using System.Linq;

class NewShit
{
    static void Main(string[] args)
    {
        int[] arrayshit = {2, 4, 45, 5, 8, 78};

        var Query = from number in arrayshit
                    where number % 2 == 0
                    select number;

        foreach(int num in arrayshit)
        {
            Console.WriteLine(num);
        }
    }
}