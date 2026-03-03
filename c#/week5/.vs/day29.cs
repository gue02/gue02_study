using System;

class Person
{
    private string name;
    private int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    public void Introduce()
    {
        Console.WriteLine($"Hello, My name is {name}, {age} old..");
    }
}
class Car
{
    public string brand;
    public int speed;

    public Car(string b)
    {
        brand = b;
        speed = 0;
    }
    public void Accelarate(int upspeed)
    {
        speed += upspeed;
    }
    public void Show()
    {
        Console.WriteLine($"{brand}, speed : {speed}");
    }
}
class Program
{
    static void Main()
    {
        Person p = new Person("철수", 23);

        p.Introduce();

        Car c = new Car("BMW");
        c.Accelarate(20);
        c.Show;
    }
}