using System;
class Sort{

    public static void Main(){
        int[] numbers = new int[5];
        int input;

        for (int i = 0; i<numbers.Length; i++){
            input=Convert.ToInt32(Console.ReadLine());
            numbers[i]=input;
        }
        int temp;
        for (int x=0;x<numbers.Length-1; x++){
            for (int y=x+1;y<numbers.Length;y++){
                if(numbers[x]>numbers[y]){
                    temp=numbers[x];
                    numbers[x]=numbers[y];
                    numbers[y]=temp;
                }
            }
        }

        Console.WriteLine("Your Array Sorted:");
        foreach (int num in numbers)
        {
            Console.WriteLine(num);
        }
    }
}