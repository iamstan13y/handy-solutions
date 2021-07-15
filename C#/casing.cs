using System;
using System.Text;

public class Casing{

    static void Main(){
        string input = "<upcase>Remember</upcase> when you praising the <upcase>butterfly</upcase>, don't you ever <upcase>disrespect</upcase> the <upcase>fucking caterpillar!</upcase>";
        string output = "";
        int index = input.IndexOf("<upcase>");
        int startIndex, endIndex;
        string word = "";
        int length;

        while (index != -1){

            startIndex = index + 8;
            endIndex = input.IndexOf("</upcase>", startIndex + 1);
            length = endIndex - startIndex;
            word = input.Substring(startIndex, length);
            output = input.Replace("<upcase>" + word + "</upcase>", word.ToUpper());
            input = output;
            index = input.IndexOf("<upcase>", startIndex + 1);
        }
        Console.WriteLine(output);
    }
}