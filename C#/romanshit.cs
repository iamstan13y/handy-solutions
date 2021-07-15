using System;
using System.Collections.Generic;

class Roman 
{

    static void Main () 
    {
        Console.WriteLine ("Enter a roman number:");
        string input = Console.ReadLine ();

        if (!(input.Length > 0 && input.Length < 4000))
        {
            Console.WriteLine("INVALID INPUT!");
        } 
        else
        {
            Console.WriteLine ("The integer equivalent is : " + ConvertToInt (input));
        }
    }

    public static int ConvertToInt (string romanNum) 
    {
        Dictionary<char, int> Values = new Dictionary<char, int> 
            { { 'I', 1 }, { 'V', 5 },
            { 'X', 10 }, { 'L', 50 },
            { 'C', 100 }, { 'D', 500 },
            { 'M', 1000 }
        };

        int integerNum = 0;
        int lastValue = 0;

        for (int i = romanNum.Length - 1; i >= 0; i--) 
        {
            int newValue = Values[romanNum[i]];

            if (newValue < lastValue) 
            {
                integerNum -= newValue;
            } 
            else 
            {
                integerNum += newValue;
                lastValue = newValue;
            }
        }

        return integerNum;
    }
}