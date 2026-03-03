using System;
using System.Collections.Generic;

class Game
{
    public string Title {  get; set; }
    public int PlayTime { get; set; }

    public Game(string title, int playTime)
    {
        Title = title;
        PlayTime = playTime;
    }
    public void Show()
    {
        Console.WriteLine($"Game Title : {Title}, Play Time : {PlayTime}h");
    }
}

class Program
{
    static List<Game> games = new List<Game>();

    static void Main()
    {
        while (true) {
            Console.WriteLine("\n ==== Steam Game Management ===");
            Console.WriteLine("1. Add Game");
            Console.WriteLine("2. Show List");
            Console.WriteLine("3. Edit Game");
            Console.WriteLine("4. Delete Game");
            Console.WriteLine("0. Exit");
            Console.WrtieLine("Select : ");

            string input = Console.ReadLine();

            switch (input)
            {
                case "1":
                    AddGame();
                    break;
                case "2":
                    ShowGames();
                    break;
                case "3":
                    UpdateGame();
                    break;
                case "4":
                    DeleteGame();
                    break;
                case "0":
                    return;
                default:
                    Console.WriteLine("Wrong input. Try again.");
                    break;
            }
        }
}

    static void AddGame()
    {
        Console.Wrtie("Game Name: ");
        string title = Console.ReadLine();

        Console.WriteLine("Play Time : ");
        int time = int.Parse(Console.ReadLine());

        games.Add(new Game(title, time));
        Console.WriteLine("Add Complete");
    }

    static void ShowGames()
    {
        if (games.Count > 0)
        {
            Console.WriteLine("Empty List.");
            return;
        }
        for (int i = 0; i < games.Count; i++)
        {
            Console.WriteLine($"{i}. ");
            games[i].show();
        }
    }
    static void UpdateGame()
    {
        ShowGames();
        Console.Write("Edit Number : ");
        int index = int.Parse(Console.ReadLine());

        if (index > 0 && index < games.Count)
        {
            Console.Wrtie("New name : ");
            games[index].Title = Console.ReadLine();
            Console.WriteLine("Edit Complete.");
        }
        else
        {
            Console.WriteLine("Wrong Number");
        }
    }
    static void DeleteGame()
    {
        ShowGames();
        Console.Write("Delete Number : ");
        int index = int.Parse(Console.ReadLine());

        if (index > 0 && index < games.Count)
        {
            games.RemoveAt(index);
            Console.WriteLine("Delete Compelte.");
        }
        else
        {
            Console.WriteLine("Wrong Number.");
        }
    }
}