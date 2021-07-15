using Internal;
using System;

namespace SHIT
{
    public class Student{

        public enum Subjects
        {
            SE, VPCD, DSA, DDC, DE, TEC, TECHNO, COMMSKILLS
        } 

        public enum Universities{
            HIT, UZ, CUT, NUST, MSU, BUSE, GZU, LSU, AU 
        }

        private string fullname;
        private string course;
        private Subjects subject;
        private Universities university;
        private string email;
        private string phonenumber;
        static int studentCount; 

        public Student()
        : this ("Stanley Brikkz")
        {
            this.course=null;
            this.email=null;
            this.phonenumber=null;
            this.university=null;
            this.subject=null;
            studentCount+=1;
        }

        public Student(string name, Subjects subject, Universities university)
        : this (name, "Computer Science")
        {
            this.subject=subject.VPCD;
            this.university=university.HIT;
        }

        public Student(string fullname, string course, Subjects subject, Universities university, string email, string phonenumber){
            this.fullname=fullname;
            this.course=course;
            this.email=email;
            this.phonenumber=phonenumber;
            this.subject=subject;
            this.university=university;
        }

        public void PrintInfo(){
            Console.WriteLine("Name: {0}, Course: {1}, E-mail: {2}, Phone Number: {3}, Subject: {4}, University: {5}", 
            this.name, this.course, this.email, this.phonenumber, this.subject, this.university);

        }

        public static void Main(){
            PrintInfo();
        }
    }
}