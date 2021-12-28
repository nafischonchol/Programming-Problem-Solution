using System;
 
class Program
{
    static void Main()
    {
        string s = Console.ReadLine();
        int lc = 0,uc=0;
        for(int i=0; i<s.Length; i++)
        {
            if(s[i] >= 'a')
                lc++;
            else
                uc++;
        }
        if (lc >= uc)
            Console.WriteLine(s.ToLower());
        else
            Console.WriteLine(s.ToUpper());
 
    }
}
