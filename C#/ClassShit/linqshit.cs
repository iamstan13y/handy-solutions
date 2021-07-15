using System;
using System.Collections.Generic;
using System.Linq;

class LinqShit
{
    static void Main()
    {
        string[] namesArray = {"Kennith", "Jessica", "Michael", "Juliet"};

        IEnumerable<string> nameQuery = from name in namesArray
                                        where name.Contains("t")
                                        orderby name descending
                                        select name;
        
        foreach (string name in nameQuery)
        {
            Console.WriteLine(name);
        }
    }
}