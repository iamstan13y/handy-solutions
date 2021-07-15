using System.Security.AccessControl;
using System;
using System.Data.SqlClient;

class DbShit
{
    static SqlConnection conn = new SqlConnection("Data Source=.\\SQLEXPRESS;Initial Catalog=codeshit;Integrated Security=True;Connect Timeout=30");
    static SqlCommand cmd;
    static SqlDataReader rdr;
    static SqlDataAdapter adapter;

    static void Main()
    {
        int choice = 0;
    
        while (true)
        {
            Console.WriteLine("\nSELECT FROM THE OPTIONS BELOW:");
            Console.WriteLine("1. View Data in Database \n2. Add New Record \n3. EXIT");
            Console.Write("OPTION #:");
            choice = int.Parse(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    ViewData();
                    break;
                case 2:
                    NewRecord();
                    break;
                case 3:
                    goto EXIT;
                default:
                    Console.WriteLine("INVALID OPTION!");
                    break;
            }
            
            EXIT:
                 bool Exit = choice == 3 ? true : false;
                 if(Exit) break;
        }
    }
    
    public static void ViewData()
    {
        conn.Open();
        cmd = new SqlCommand("SELECT * FROM [Details]", conn);
        rdr = cmd.ExecuteReader();
        
        Console.WriteLine("_________________________STAFF DETAILS_____________________________");
        Console.WriteLine("___________________________________________________________________");
        Console.WriteLine("|     NAME     |           EMAIL           |       LANGUAGE       |");
        Console.WriteLine("|______________|___________________________|______________________|");
        while (rdr.Read())
        {
            Console.Write($"    {rdr.GetString(0)}        {rdr.GetString(1)}                {rdr.GetString(2)}");
            Console.WriteLine();
            Console.WriteLine("|--------------|---------------------------|----------------------|");
        }
        conn.Close();
    }

    public static void NewRecord()
    {
        string name, email, lang;
        conn.Open();
        Console.WriteLine("\n<<<<Enter Details of Staff Member>>>>");
        Console.Write("NAME:");
        name = Console.ReadLine();
        Console.Write("EMAIL:");
        email = Console.ReadLine();
        Console.Write("LANGUAGE:");
        lang = Console.ReadLine();
        
        cmd = new SqlCommand("INSERT INTO [Details] VALUES(@name,@email,@lang)", conn);
        cmd.Parameters.AddWithValue("@name", name);
        cmd.Parameters.AddWithValue("@email", email);
        cmd.Parameters.AddWithValue("@lang", lang);
        cmd.ExecuteNonQuery();
        conn.Close();
        ViewData();
    }

}