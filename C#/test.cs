using System;

class test {

    // static int fact(int n) {
    //     if (n <= 1) {
    //         return 1;
    //     } else {
    //         return n*fact(n - 1);
    //     }
    // }

    public static bool IsEven(int number){
        bool result = number % 2 == 0 ? true : false;
        return result;
    }
    static void Main () {
        Console.WriteLine(IsEven(6));
        // int num;
        // System.Console.WriteLine("Enter any number:");
        // num=int.Parse(System.Console.ReadLine());
        // System.Console.WriteLine("Factorial is " + fact(num));

    }

}