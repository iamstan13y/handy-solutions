using System;

public class Reggae{

    static void Main(){
        Console.WriteLine("Enter a text, length of not more 20 Characters:");
        string input = Console.ReadLine();
        string output=input.PadRight(20, '*');
        Console.WriteLine(output);
    }
}