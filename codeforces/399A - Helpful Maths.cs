using System;
internal class Program
{
    static void Main()
    {
        string a = Console.ReadLine();
        string [] result = new string[3];
        foreach (char s in a)
        {
            if (s == '+')
                continue;
            else if (s == '1')
                result[0] += "1+";
            else if (s == '2')
                result[1] += "2+";
            else if (s == '3')
                result[2] += "3+";
        }
        string ans = result[0] + result[1] + result[2];
        Console.WriteLine(ans.Remove(ans.Length-1));
    }
}
