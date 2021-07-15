using System;

public class Cat{
    int MyValue=23;
    private string name;
    private string color;

    public string Name{
        get{
            return this.name;
        }
        set{
            this.name=value;
        }
    }

    public string Color{
        get{ 
            return this.color;
        }
        set{
            this.color=value;
        }
    }

    public Cat(){
        this.name="Unnamed";
        this.color="Gray";
    }

    public Cat(string name, string color){
        this.name=name;
        this.color=color;
    }

    public void SayFuck(){
        Console.WriteLine("Cat {0} Said Fuck!", name);   
        //Console.WriteLine("{0}'s color is {1}", name, color);     
    }

     void Main(){
        //string name,color;
        // name=Console.ReadLine();
        // color=Console.ReadLine();
        Cat firstCat =new Cat();
        firstCat.name="Stan";
         Cat secondCat =new Cat();
        secondCat.name="Juju";
        //int MyValue=47;
        // Cat[] cats =new Cat[]{firstCat, secondCat};
        // foreach(Cat cat in cats){
        //     cat.SayFuck();
        // }
        Console.WriteLine(this.MyValue);
    }
}
