using Internal;
using System;

public class Unicode{

    static void Main(){
        Console.WriteLine("Enter The Text To Convert To Unicode:");
        string text = Console.ReadLine();

        foreach (char ch in text){
            Console.Write("\\u{0:x4}", (ushort)ch);
        }
    }
}