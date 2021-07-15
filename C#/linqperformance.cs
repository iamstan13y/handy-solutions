using Internal;
using System;
using System.Linq;
using System.Collections.Generic;

class Shit
{
    static void Main()
    {
        List<int> myLi = new List<int>();
        DateTime start = DateTime.Now;
        myLi.AddRange(Enumerable.Range(1, 50000000));
        Console.WriteLine("{0}", DateTime.Now - start);

        start = DateTime.Now;
        List<int> Li = new List<int>();
        for (int i = 0; i < 50000000; i++) Li.Add(i);
        Console.WriteLine("{0}", DateTime.Now - start);
    }
}