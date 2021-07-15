using System.Text;
using Internal;
using System;

class SomeShit{

    static void Main(){
        //string str1 = "Stoney";
        // string str2 = "I can swallow a bottle of alcohol and i'll feel like Godzilla. Better hit the deck like a car dealer.";
        // int index = str2.IndexOf("a");
        // int occurences=0;
        
        // while (index != -1){
        //     occurences+=1;
        //     index=str2.IndexOf("a", index+1);
        // }

        // Console.WriteLine("The Keyword 'a' appeared {0} times.", occurences);
        // Console.WriteLine(str2.Substring(53, 8));

        // SPLIT:
        // string Albums ="Infinite, SSLP, MMLP, The- Eminem-Show, Encore, Relapse, Recovery, MMLP2, Revival, Kamikaze, MTBMB";
        // char[] separators = new char[]{' ', ',', '.'};
        // string[] AlbumsArr = Albums.Split(separators, StringSplitOptions.RemoveEmptyEntries);

        // foreach(string album in AlbumsArr){
        //     Console.WriteLine(album);
        // }

        string swine = "brikkz";
        StringBuilder rev = new StringBuilder();

        for (int i = swine.Length - 1; i >= 0; i--){
            rev.Append(swine[i]);
        }
        Console.WriteLine(rev.ToString());
    }
}