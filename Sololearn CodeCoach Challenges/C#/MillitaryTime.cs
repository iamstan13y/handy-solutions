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
            DateTime d = DateTime.Parse(Console.ReadLine());
            Console.WriteLine(d.ToString("HH:mm"));
        }
    }
}
