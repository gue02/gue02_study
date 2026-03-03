using System;

class Person
{
    private int age;
    private string name;

    Person(int age, string name)
    {
        this.age = age;
        this.name = name;
    }
    ~Person()
    {
        Console.WriteLine("Delete.");
    }
    public void returnAge()
    {
        return age;
    }
    public void returnName()
    {
        return name;
    }
    public void printinform()
    {
        Console.WriteLine($"Name : {name}, Age : {age}");
    }
}
class Car
{
    private string brand;
    private int speed;

    Car(string brand)
    {
        this.brand = brand;
        speed = 0;
    }
    Car(string brand, int speed)
    {
        this,brand = brand;
        this.speed = speed;
    }
    ~Car()
    {
        Console.WriteLine("Delete.");
    }
    public void Accelarate(int speed)
    {
        this.speed += speed;
    }
    public void printInfo()
    {
        Console.WriteLine($"Brand Name : {brand}, Speed : {speed}")
    }
    public string returnBrand()
    {
        return brand;
    }
    public int returnSpeed()
    {
        return speed;
    }
}
class Program()
{
    static void Main()
    {
        Person p = new Person("Kim", 23);
        p.printinform();

        Car c = new Car("BMW");
        c.Accelarate(60);

        c.printInfo();

        return 0;
    }
}