using System;
class palindrome {

    static void Main () {
        //Palindrome using Arrays
        Console.WriteLine ("Enter The Number:");
        string num = Console.ReadLine();

        int[] number = new int[num.Length];

        int i = 0;
        foreach(int digit in num){
            number[i]=(int) digit;
            i++;
        }

        bool symmetric=true;
        for (i=0;i<num.Length/2;i++){
            if (number[i]!=number[num.Length-i-1]){
                symmetric=false;
            }
        }   
        Console.WriteLine("Symmetric?: {0}", symmetric);
        Console.log();
    }
}