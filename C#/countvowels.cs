using System;

class VowelCount {
    static void Main () {

        Console.WriteLine ("Enter any word:");
        string input = Console.ReadLine ();

        string allvowels = "AEIOUaeiou";
        int vowelCount = 0;
        int consCount = 0;
        string vowels = "";
        string consonants = "";
        foreach (char letter in input) {
            foreach (char vowel in allvowels) {
                if (letter == vowel) {
                    vowelCount++;
                    vowels += letter;
                }
            }
        }

        foreach (char letter in input) {
            foreach (char vowel in vowels) {
                if (letter != vowel) {
                    consCount++;
                    consonants += letter;
                }
            }
        }

        Console.WriteLine (vowelCount + " vowels: " + vowels);
        Console.WriteLine (consCount + " consonants: " + consonants);
    }
}