using System;
using System.Collections.Generic;
using System.Linq;

class Dog {
    public string Name { get; set; }
    public int Age { get; set; }

    static void Main () {

        List<Dog> dogs = new List<Dog> () {
            new Dog { Name = "Qox", Age = 49 },
            new Dog { Name = "Polo", Age = 19 },
            new Dog { Name = "Shawty", Age = 5 }
        };

        //var names = dogs.Select (x => x.Name);
        var names = from dog in dogs
        where dog.Age < 20
        select dog.Name;

        foreach (var name in names) {
            Console.WriteLine (name);
        }
    }
}