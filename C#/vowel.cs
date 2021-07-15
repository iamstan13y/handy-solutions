using Internal;
using System;

class VowelShit
{
    static void Main()
    {
        string vowels = "AEIOUaeiou";
        bool consonant = true;
        Console.WriteLine("Enter any word:");
        char input = Convert.ToChar(Console.ReadLine());

        foreach (char letter in vowels)
        {
            if((input == letter))
            {
                Console.WriteLine($"Letter '{input}' is a vowel sound!");
                consonant = false;
                break;
            }
        }

        if (consonant == true)
        {
            Console.WriteLine($"Letter '{input}' is a consonant!");
        }
    }

}