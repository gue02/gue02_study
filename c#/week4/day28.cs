using System;
class Car
{
	public string brand;
	public int speed;

	public Car(string b)
	{
		brand = b;
		speed = 0;
	}

	public void Accelarate()
	{
		speed += 10;
	}
	public void show()
	{
		Console.WriteLine($"{brand} 현재 속도 : {speed}");
	}
}
class Program
{
	static void Main()
	{
		Car c = new Car("BMW");
		c.Accelarate();
		c.show();
	}
}