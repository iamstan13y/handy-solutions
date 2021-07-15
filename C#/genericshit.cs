using System.Data;
using Internal;
using System;

namespace MyShit
{
    class GenericShit
    {
        public static void Swap<T>(ref T a, ref T b){
            T temp = a;
            a = b;
            b = temp;
        }

        static void Main(){
            Console.WriteLine("Enter Any Strings or Numbers To Swap:");
            string num1 = Console.ReadLine();
            string num2 = Console.ReadLine();
            Swap(ref num1, ref num2);
            Console.WriteLine("After Swap {0}, {1}", num1, num2);
        }
    }
}