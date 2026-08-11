using Systems;

class Animal 
{
    public string Name {get; set}

    public Animal(){
        Name = "Unknown";
    }
}

class Dog : Animal 
{
    public Dog()
    {
        Name = "Buddy";
    }

    public void Bark()
    {
        Console.WriteLine($"{Name} says: Woof!");
    }
}

class AnimalFactory<T> where T : Animal, new()
{
    public T CreateAnimal()
    {
        T animal = new T();
        console.WriteLine($"Created: {animal.Name}")
        return animal;
    }
}

class Program
{
    static voida Main()
    {
        var factory = new AnimalFactory<Dog>();

        Dog dog = factory.CreateAnimal();
        dog.Bark()
        Console.ReadLine();
    }
}