using System;
class greater {

    static void Main () {
        int a = 9;
        int b = 47;
        int c = 59;
        //Method 1
        //int max = a-((a-b) & ((a-b) >> 31));

        //Method 2
        //int max = (a + b + Math.Abs (a - b)) / 2;

        //Method 3
        int max = (a > b? a : b) > c ? (a > b? a : b) : c;
        System.Console.WriteLine ("Greater: " + max);

    }
}