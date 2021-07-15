using Internal;
using System;

class square {

    static void Main () {
        Console.WriteLine ("Enter the dimensions of your array:");
        Console.WriteLine("m=");
        int m = int.Parse(Console.ReadLine());
        Console.WriteLine("n=");
        int n = int.Parse(Console.ReadLine());

        int value = 0;
        int[,] matrice = new int[m, n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                value++;
                matrice[j,i] = value;
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                Console.Write(matrice[i,j] + "  ");
            }
            Console.WriteLine();
        }
    }
}