using Internal;
using System;

public class SelectionSort{

    static void Main(){

    int[] myArray = new int[5];
    Console.WriteLine("Enter any 5 numbers in random order:");

    for (int i = 0; i < 5; i++){
        myArray[i] = Convert.ToInt32(Console.ReadLine());
    }

 Sort(myArray, myArray.Length);
}

public static void Sort(int[] input, int n){
    for (int i = 0; i < n-1; i++){
        var minID = i;
        for (int j = i+1; j < n; j++){
            if (input[j] < input[minID]) minID = j;
        }
        var temp = input[minID];
        input[minID] = input[i];
        input[i] = temp;
    }

    foreach (var item in input)
    {
        Console.WriteLine(item);
    }
}
}