using System;
using System.Text;
using Internal;

public static class Ext {

    public static StringBuilder Substring (this StringBuilder str, int index, int length) {

        StringBuilder newString = new StringBuilder ();

        for (int i = index; i < (length + index); i++) {
            newString.Append (str[i]);
        }

        return newString;
    }

    static void Main () {
        StringBuilder shit = new StringBuilder ("eehiijklttu");
        Console.WriteLine (shit.Substring (3, 6));
    }

}