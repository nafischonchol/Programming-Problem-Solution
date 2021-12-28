using System;
 
class Program
{
    static void Main()
    {
        long x = Int64.Parse(Console.ReadLine());
        if(x%5==0)
            Console.WriteLine(x/5);
        else
        {
            long result = x / 5;
            Console.WriteLine(++result) ;
        }
        
    }
}
