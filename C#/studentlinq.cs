using System;
using System.Collections.Generic;
using System.Linq;

public class Student {

    string Firstname { get; set; }
    string Lastname { get; set; }
    int Age { get; set; }

    static void Main (String[] args) {

        List<Student> students = new List<Student> () {
            new Student { Firstname = "Stanley", Lastname = "Brikkz", Age = 20 },
            new Student { Firstname = "Keith", Lastname = "Charedzera", Age = 20 },
            new Student { Firstname = "Juliet", Lastname = "Masvaure", Age = 12 },
            new Student { Firstname = "Shelley", Lastname = "Stanton", Age = 1 },
        };

        var names = from student in students
        where student.Firstname.CompareTo (student.Lastname) == 1
        select student.Firstname + " " + student.Lastname;

        foreach (var name in names) {
            Console.WriteLine (name);
        }
    }
}