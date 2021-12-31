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
            string password = Console.ReadLine();
            int numcount = 0;
            int charcount = 0;
            string nums = "0123456789";
            string specials = "@#$!%*&";
            
            foreach (char c in password)
            {
              foreach (char sp in specials)
              {
                  if (sp == c)
                  {
                    charcount++;
                  }
              }   
            
              foreach (char num in nums)
              {
                  if (c == num)
                  {
                      numcount++;
                  }
              }
            }
            
            if (numcount >=2 && charcount >= 2 && password.Length >= 7)
            {
                Console.WriteLine("Strong");
            } 
            else 
            {
                Console.WriteLine("Weak");
            }
        }
    }
}
