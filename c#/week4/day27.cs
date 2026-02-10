using System;

class Program
{
    static int Add(int a, int b)
    {
        return a + b;
    }
    static void Hello()
    {
        Console.WriteLine("안녕하세요");
    }
    static void main()
    {
        Hello();
        Console.WriteLine(Add(3,6));
    }
}