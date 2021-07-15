using Internal;
using System;

class Rnd
{
    
    static void Main(){
        Random rnd = new Random();
        int num;

        for (int i = 0; i < 10; i++)
        {
            num=rnd.Next(100,200);
            Console.WriteLine(num);
        }
    }
}