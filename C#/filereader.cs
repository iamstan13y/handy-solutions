using Internal;
using System;
using System.IO;

class FileShit{
    static void Main(){
        StreamReader reader = new StreamReader("C:\\Users\\Stanley Brikkz\\Documents\\EMMANUEL MAZAMBANI COMPUTER SCIENCE PROJECT\\Lodge Management System\\Lodge Management System\\bin\\Debug\\readme.txt");
        
        using(reader){
            string line = reader.ReadLine();

            while(line != null){
            Console.WriteLine(line);
            line = reader.ReadLine();
        }
        }
    }
}