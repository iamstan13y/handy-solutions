using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            int[] shit = new int[N];
            for (int i = 0; i < N; i++){
           shit[i] = int.Parse(Console.ReadLine());     
            }
            int sum = 0;
            foreach (int num in shit){
                if (num % 2 == 0){
                    sum+=num;
                }
            }
            
            Console.WriteLine(sum);
        }
    }
}
