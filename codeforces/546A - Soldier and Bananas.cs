using System;
 
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        string [] parts = s.Split(' ');
        int k = Int32.Parse(parts[0]);
        long n = Int64.Parse(parts[1]);
        int w = Int32.Parse(parts[2]);
 
        int result = w * (w + 1);
        result = result / 2;
        result = result * k;
        if(result <= n)
            Console.WriteLine("0");
        else
            Console.WriteLine(result-n);
 
    }
}
