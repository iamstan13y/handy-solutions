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
            int siblings, popsicles;
            siblings = Convert.ToInt32(Console.ReadLine());
            popsicles = Convert.ToInt32(Console.ReadLine());
            
            if (popsicles % siblings == 0){
                Console.WriteLine("give away");
            } else {
                Console.WriteLine("eat them yourself");
            }
        }
    }
}
