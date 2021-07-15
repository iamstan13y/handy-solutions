using System;

class Duplicate {

    static void Main () {

        int[] numArray = { 1, 4, 12, 9, 21, 2, 47 };
        bool duplicates = false;

        foreach (int item in numArray) {

            for (int i = 0; i < numArray.Length; i++) {

                if (item == numArray[i]) {
                    Console.WriteLine (item + " " + numArray[i]);
                    duplicates = true;
                    break;
                }
            }
        }

        if (duplicates == true) {

            Console.WriteLine ("This array contains duplicate entries!");

        } else {

            Console.WriteLine ("No duplicates!");
        }
    }
}