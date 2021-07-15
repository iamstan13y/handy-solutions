using System;

class Env{

    static void Main(){
        int sum=0;
        int startTime=Environment.TickCount;

        for (int i=0;i<10000000;i++){
            sum++;
        }
        int endTime = Environment.TickCount;
        Console.WriteLine("Elapsed Time is {0} seconds.", ((endTime-startTime)/1000.00));
    }
}