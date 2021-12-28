using System;
 
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        string[] parts = s.Split(' ');
        long a = Int64.Parse(parts[0]);
        long b = Int64.Parse(parts[1]);
 
        int result=0;
        for(int i=0;i<b;i++)
        {
            if (a % 10 == 0)
                a = a / 10;
            else
                a--;
        }
        Console.WriteLine(a);
 
    }
}
