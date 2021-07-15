using System;
using Internal;
class shit {

 
    /*     static int total(params int[] nums){

            int sum=0;
            foreach (int num in nums)
            {
                sum+=num;
            }

            c#return sum;
        } */

    static void Main () {
        
                int a = 47;
                int b= 3;
                int c=9;
                int imax =a-((a-b) & ((a-b)>>31));
                int max =imax-((imax-c)&((imax-c)>>31));

                string name = "stanley brikkz";

                foreach (char i in name) {
                    Console.WriteLine ("Greater: " + (int) i);
                } 

        /*  int[,,] myarray=new int[3,3,3];     
         for (int a = 0; a <= 2; a++) {
             for (int b = 0; b <= 2; b++) {
                 for (int c = 0; c <= 2; c++) { 
                     myarray[a,b,c]=int.Parse(Console.ReadLine());
                 
             }
         } */

    }
}