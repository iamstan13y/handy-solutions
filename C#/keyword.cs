using System;

public class Keyword{

    static void Main(){
        string text = "Fuck you motherfucker. I hope you fucken die!";
        string[] textArr = text.Split('.');
        int index = text.IndexOf("fuck");

        foreach (string sentence in textArr){
            while(index != -1){
                Console.WriteLine(sentence);
                index = text.IndexOf("fuck", index++);
            }    
        }
    }
}