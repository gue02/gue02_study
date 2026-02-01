using System;
class Program
{
    static void Main()
    {
        int score = 85;

        if(score >= 90)
        {
            Console.WriteLine("A");
        }
        else if (score >= 80)
        {
            Console.WriteLine("B");
        }
        else
        {
            Console.WriteLine("C");
        }
        //우리가 아는 조건문 방식 그대로 사용.

        int menu = 2;
        switch(menu)
        {
            case 1: 
                Console.WriteLine("김치찌개");
                break;
            case 2:
                ConsoleWriteLine("된장찌개");
                break;
            default:
                Console.WriteLine("없음");
                break;
        }
        //switch case 도 동일. break 필수
        string result = menu switch
        {
            1 => "김치찌개",
            2 => "된장찌개",
            _ => "None."
        };
        Console.WriteLine(result);
        //c# 방식 switch case. string result에 menu 값에 따라 다른 값을 넣는 방식.
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine(i);
        }
        //c++이랑 동일. i++, i-- 전부 가능함.
        
        int i = 0;

        while (i < 3)
        {
            Console.WriteLine(i);
            i++;
        }
        // 조건 true 동안 반복하는 방식도 동일.

        int[] nums = {1,2,3,4,5};
        foreach(int n in nums)
        {
            Console.WriteLine(n);
        }
        // 파이썬의 for 방식. 배열 리스트의 순회 최적화.
        for (int i = 0; i < 5; i++)
        {
            if (i == 2) continue;
            if (i == 4) break;
            Console.WriteLine(i);
        }
        // 해당 내용도 동일.

        /*
        그럼 뭐가 다른거임?
        if (x = 5) {}
        해당 방식은 c#에서 사용 불가능함.
        if (x == 5) {} 
        == 비교가 필수적임.
        */
         
         int[] arrays = {3, 5, 7, 9};

         foreach(int n in arrays)
        {
            if(n >= 5)
            {
                
                Console.WriteLine("크다");
            }
            else
            {
                Console.WriteLine("작다");
            }
        }
    }
}