using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> numbers = new List<int>();

        numbers.Add(10);
        numbers.Add(20);
        numbers.Add(30);

        Console.WriteLine("List 내용:");

        foreach (int n in numbers)
        {
            Console.WriteLine(n);
        }

        Console.WriteLine("총 개수: " + numbers.Count);
    }
}