using Internal;
using System;

public class KeithNumber{

    static void Main(){

        Console.WriteLine("Enter Any Number:");
        int n = int.Parse(Console.ReadLine());
        int copy = n;

        string s = n.ToString();

        //no. of digits in the number:
        int d = s.Length;

        //storing the terms of the series:
        int[] arr = new int[n];
        
        for (int i = d - 1; i >= 0; i--){
            arr[i] = copy % 10;
            copy /= 10;
        }

        int sum = 0;
        int k = d;
        while (sum < n){
            sum = 0;

            for (int j = 1; j <= d; j++){
                sum += arr[k - j];
            }

            arr[k] = sum;
            k++;
        }

        if (sum == n){
            Console.WriteLine("{0} is a Keithnumber.", n);
        } else {
            Console.WriteLine("{0} is not a Keithnumber.", n);
        }
    }
}