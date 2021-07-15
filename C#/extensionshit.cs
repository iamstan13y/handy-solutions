using System;
using Internal;

public static class Ext {

    public static int WordCount (this string str) {

        return str.Split (new char[] { ' ', '.', '?', '!' }, StringSplitOptions.RemoveEmptyEntries).Length;
    }

    static void Main () {
        string shit = "What the fuck!";
        int count = shit.WordCount ();
        Console.WriteLine (count);
    }
}