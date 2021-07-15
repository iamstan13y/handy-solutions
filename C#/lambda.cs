using System.Security.AccessControl;
using System;
using System.Linq;
using System.Collections.Generic;

class Lambda
{
    static void Main()
    {
        int[] myNumbers = {1, 2, 3, 4, 5, 6, 7, 8};

        var evenNumbers = myNumbers.OrderByDescending(x => (x % 2) == 0);
        foreach (var num in evenNumbers)
        {
            Console.Write("{0}, ", num);
        }
    }
}