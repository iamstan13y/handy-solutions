using Internal;
using System;

public class Coffee{

    public CoffeeSize size;

    public Coffee(CoffeeSize size){
        this.size=size;
    }

    public CoffeeSize Size{
        get{ return size;}
    }

    static void Main(){
        Coffee normalCoffee = new Coffee(CoffeeSize.Normal);
        Coffee doubleCoffee = new Coffee(CoffeeSize.Double);

        Console.WriteLine("The {0} coffee is {1}ml.", normalCoffee.Size, (int)normalCoffee.Size);
        Console.WriteLine("The {0} coffee is {1}ml.", doubleCoffee.Size, (int)doubleCoffee.Size);        
    }
}

public enum CoffeeSize{
    Small=100, Normal=150, Double=300
}