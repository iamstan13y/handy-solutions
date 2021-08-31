using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MatriceShit
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the order of matrix A:");
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int[,] A = new int[a, b];

            Console.WriteLine("Enter the order of matrix B:");
            int c = int.Parse(Console.ReadLine());
            int d = int.Parse(Console.ReadLine());

            int[,] B = new int[c, d];

            int[,] solution = new int[a, d];

            if (b == c)
            {
                Console.WriteLine("Enter the values of matrix A:");
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        A[i, j] = int.Parse(Console.ReadLine());
                    }
                }

                Console.WriteLine("Enter the values of matrix B:");
                for (int i = 0; i < c; i++)
                {
                    for (int j = 0; j < d; j++)
                    {
                        B[i, j] = int.Parse(Console.ReadLine());
                    }
                }

                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < d; j++)
                    {
                        solution[i, j] = 0;

                        for (int k = 0; k < c; k++)
                        {
                            solution[i, j] = solution[i, j] + (A[i, k] * B[k, j]);
                        }
                    }
                }

                Console.WriteLine("The Solution is:");
                for (int i = 0; i < a; i++)
                {
                    Console.WriteLine("\t");
                    for (int j = 0; j < d; j++)
                    {
                        Console.Write($"{solution[i, j]} \t");
                    }
                    Console.WriteLine();
                }
                Console.ReadLine();
            }
            else
            {

                Console.WriteLine("Invalid Matrix Order.");
            }
        }
    }
}
