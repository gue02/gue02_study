using System;
using System.Collections.Generic;

class Game
{
    public string title;
    public int playTime;

    public Game(string title, int playTime)
    {
        this.title = title;
        this.playTime = playTime;
    }

    public void Show()
    {
        Console.WriteLine($"게임: {title} / 플레이시간: {playTime}시간");
    }
}

class Program
{
    static List<Game> games = new List<Game>();

    static void Main()
    {
        while (true)
        {
            Console.WriteLine("\n==== 게임 관리 프로그램 ====");
            Console.WriteLine("1. 게임 추가");
            Console.WriteLine("2. 게임 목록 출력");
            Console.WriteLine("0. 종료");
            Console.Write("선택: ");

            string input = Console.ReadLine();

            if (input == "1")
            {
                AddGame();
            }
            else if (input == "2")
            {
                ShowGames();
            }
            else if (input == "0")
            {
                Console.WriteLine("프로그램 종료");
                break;
            }
            else
            {
                Console.WriteLine("잘못된 입력");
            }
        }
    }

    static void AddGame()
    {
        Console.Write("게임 이름: ");
        string title = Console.ReadLine();

        Console.Write("플레이 시간: ");
        int time = int.Parse(Console.ReadLine());

        Game g = new Game(title, time);
        games.Add(g);

        Console.WriteLine("게임 추가 완료!");
    }

    static void ShowGames()
    {
        if (games.Count == 0)
        {
            Console.WriteLine("등록된 게임이 없습니다.");
            return;
        }

        Console.WriteLine("\n=== 게임 목록 ===");
        for (int i = 0; i < games.Count; i++)
        {
            games[i].Show();
        }
    }
}