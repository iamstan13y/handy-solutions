using System;
using System.IO;

class Writer{

    static void Main(){
        StreamWriter writer = new StreamWriter("stanton.txt");
        Random rand = new Random();

        string characters="tyaslne";

        using(writer){
            int index;

            for (int i=0; i<7;i++){
                index = rand.Next(characters.Length);
                writer.Write(characters[index]);
            }
        }
    }
}