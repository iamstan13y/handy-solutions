class sqroot {

    static void Main () {
        int num;
        System.Console.WriteLine ("Enter Any Integer:");
        num = int.Parse (System.Console.ReadLine ());
        System.Console.WriteLine ("The Square Root Is: " + sqrt (num));
    }

    static float sqrt (float n) {
        float root=0;
        for (int x = 2; x <= n; x++) {
            root = n / x;
            if ((root * root) == n) {
                break;
            }
        }
        return root;
    }
}