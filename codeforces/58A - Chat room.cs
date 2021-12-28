using System;
 
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        string hello = "hello";
        int i = 0;
        foreach (char c in s)
        {
            if (i == 5)
                break;
            if(c == hello[i])
            {
                i++;
            }
 
 
        }
        if(i == 5)
            Console.WriteLine("YES");
        else
            Console.WriteLine("NO");
 
    }
}
