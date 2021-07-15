using Internal;
using System.IO;
using System;

class ExceptionHandling{

    static void Main(){

        string fileName = ".\\Assignment.txt";
        TextReader reader = null;

        try
        {
            //trying to read data from a text file:
            reader = new StreamReader(fileName);
            string line = reader.ReadLine();
            
            while(line != null)
            {
                Console.WriteLine(line);
                line = reader.ReadLine();
            }
        }
        catch (FileNotFoundException)
        {
            //Handling the expected exception
            Console.WriteLine($"File '{fileName}' does not exist!");
        }
        finally
        {
            //reader should always be closed to avoid future exceptions
            if (reader != null)
            {
                reader.Close();
            }
        }
    }
}