using System;
 
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        string[] parts = s.Split(' ');
        long a = Int64.Parse(parts[0]);
        long b = Int64.Parse(parts[1]);
 
        int i=1;
        while(true)
        {
            a *= 3;
            b *= 2;
            if(a > b)
            {
                Console.WriteLine(i);
                break;
            }
            i++;
        }
 
    }
}
