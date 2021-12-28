using System;
 
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        bool check= false;
        foreach(char c in s)
        {
            if(c == 'H' || c == 'Q' || c == '9')
            {
                check = true;
                break;
            }
        }
        if(check)
            Console.WriteLine("YES");
        else
            Console.WriteLine("NO");
 
        }
}
