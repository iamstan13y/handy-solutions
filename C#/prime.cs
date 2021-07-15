using System;
class prime{

    static void Main(){
        Console.WriteLine("Enter Any Number:");
        int num=int.Parse(Console.ReadLine());
        int max=(int) Math.Sqrt(num);
        bool isPrime = true;

        for (int div=2;div<=max;div++){
            if (num%div==0){
                isPrime=false;
                break;
            }
        }
        Console.WriteLine(isPrime==true? num + " is Prime.":num + " is not Prime.");
    }
}