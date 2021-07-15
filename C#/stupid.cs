using System;
class sequence
{
    
    static void Main()
    {
        
        int num;
        for (int x = 2; x <= 10; x++)
        {
            if (x % 2 == 0)
            {
                num = x;
            } else 
            {
                num = int.Parse("-" + x);
            }
            Console.WriteLine(num);
        }
    }
}