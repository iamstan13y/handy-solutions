class remainder {

    static void Main () {
        int num;
        System.Console.WriteLine ("Enter Any Number:");
        num = int.Parse(System.Console.ReadLine());

        num /= 100;
        if (num % 10 == 7) {
            System.Console.WriteLine ("3rd digit is 7");
        } else {
            System.Console.WriteLine ("fuck off!");
        }
    }
}