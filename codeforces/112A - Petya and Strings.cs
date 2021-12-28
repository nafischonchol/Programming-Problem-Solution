using System;
public class Program
{
    static void Main(string[] args)
    {
        string a = Console.ReadLine().ToUpper();
        string b = Console.ReadLine().ToUpper();
        if (a == b)
            Console.WriteLine("0");
        else
        {
            for (int i = 0; i < a.Length; i++)
            {
                if (a[i] > b[i])
                {
                    Console.WriteLine("1");
                    break;
                }
                else if (a[i] < b[i])
                {
                    Console.WriteLine("-1");
                    break;
                }
                    
            }
        }
 
    }
}
