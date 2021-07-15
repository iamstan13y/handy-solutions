using System;

public class CallByValue{

    public static void Main(){

        //1D-array initialization
        int[] myArray={2,4,7,-3,13};

        //method call passing array as argument
        DisplaySquare(myArray); 
    }

    //method acting on array elements
    static void DisplaySquare(int[] arr){
        
        foreach (int item in arr)
        {
            Console.WriteLine(item);
        }
    }
}