using System;

class RefShit
{
    static void Main()
    {
        int a = 56;
        int b = 47;
        Ref(ref a, ref b);
        Console.WriteLine(a + " " + b);

    }

    public static void Ref(ref int num1, ref int num2)
    {
        num1 = 45;
        num2 = 45;
    }
}