using System;
internal class Program
{
    static void Main()
    {
       
        string a = Console.ReadLine();
        int count = 0;
        int l = a.Length;
        for(int i = 0; i < l; i++)
        {
            if (a[i] != ' ')
                count++;
            a =a.Replace(a[i] , ' ');
           
        }
        if(count%2==0)
            Console.WriteLine("CHAT WITH HER!");
        else
            Console.WriteLine("IGNORE HIM!");
    }
}
