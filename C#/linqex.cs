using Internal;
using System;
using System.Linq;
using System.Collections.Generic;

class Shit
{
    static void Main()
    {
        int[] години = {21, 2, 45, 134, 98, 76, 54, 43, 23, 25, 47};

        var multiples = from number in години
                        where (number % 7 == 0)
                        select number;
        
        foreach (var number in multiples)
        {
            Console.WriteLine(number);
        }
    }
}