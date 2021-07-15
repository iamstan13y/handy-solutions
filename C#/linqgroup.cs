using Internal;
using System;
using System.Linq;
using System.Collections.Generic;

class LinqGroup
{
    static void Main()
    {
        int[] numbers = {5, 4, 1, 3, 9, 8, 6, 7, 2, 0, 10, 11, 12, 13, 47};
        int divisor = 5;

        var numberGroups = from number in numbers
                           group number by number % divisor into numgroup
                           select new {Remainder = numgroup.Key, Numbers = numgroup};
        
        foreach (var group in numberGroups)
        {
            Console.WriteLine($"Numbers with a remainder of {group.Remainder} when divided by {divisor}:");

            foreach (var number in group.Numbers)
            {
                Console.WriteLine(number);
            }
            Console.WriteLine();
        }
    }
}