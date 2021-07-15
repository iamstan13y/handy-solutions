using System;
using System.Threading;

namespace MyShit
{
    public class TheShit
    {
        public static void Main(string[] args)
        {
            Threads testShit = new Threads();
            Thread t1 = new Thread(new ThreadStart(testShit.Thread1));
            t1.Name = "THREAD 1";
            t1.Priority = ThreadPriority.Highest;
            t1.Start();

            Thread t2 = new Thread(new ThreadStart(testShit.Thread2));
            t2.Name = "THREAD 2";
            t2.Start();

            // Console.ReadLine();
        }
    }

    public class Threads
    {
        public void Thread1()
        {
            Console.WriteLine("********Thread 1 Info******");
            Console.WriteLine("Name: "+ Thread.CurrentThread.Name);
            Console.WriteLine(Thread.CurrentThread);
            Console.WriteLine("State: "+ Thread.CurrentThread.ThreadState);
            Console.WriteLine("Priority: "+ Thread.CurrentThread.Priority);
            Console.WriteLine("********End Thread 1 Info******");
        }

        public void Thread2()
        {
            Console.WriteLine("********Thread 2 Info******");
            Console.WriteLine("Name: "+ Thread.CurrentThread.Name);
            Console.WriteLine(Thread.CurrentThread);
            Console.WriteLine("State: "+ Thread.CurrentThread.ThreadState);
            Console.WriteLine("Priority: "+ Thread.CurrentThread.Priority);
            Console.WriteLine("********End Thread 2Info******");
        }
    }
}