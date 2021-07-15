using Internal;
using System;
using System.Linq;
using System.Collections.Generic;

class LinqShit
{
    static void Main()
    {
        string[] names = {"Stanley", "Clever", "Shelton"
                        , "Simbarashe", "Raymond", "Freedom"
                        , "Christian", "Tinashe"};
        
        var sortedNames = from name in names
                          orderby name ascending
                          select name;
        
        foreach (var name in sortedNames)
        {
            Console.WriteLine(name);
        }
    }
}