using System;
internal class Program
{
    static void Main()
    {
        int n = Int32.Parse(Console.ReadLine());
        string a = Console.ReadLine();
        int count = 0;
        char c= ' ';
        foreach (char s in a)
        {
            if (c == s)
                count++;
            else
                c = s;
        }
        Console.WriteLine(count);
        
    }
}
