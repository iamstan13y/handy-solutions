using Internal;
using System.Text;
using System;

public class Parenthesis{

    static void Main(){
        string expr;
        Console.WriteLine("Enter Any Arithmetic Expression:");
        expr = Console.ReadLine();
        RemoveShit(expr);
    }

    static void RemoveShit(string equation){
        int count = 0;
        foreach (char ch in equation){
            if (ch == '('){
                count++;
            } 
            else if (ch == ')'){
                count--;
            }
        }

        if (!(count == 0)){
            Console.WriteLine("That Arithmetic Expression Is Invalid!.");
        } else {
            Console.WriteLine("That Arithmetic Expression Looks Fine!.");
        }
    }
}