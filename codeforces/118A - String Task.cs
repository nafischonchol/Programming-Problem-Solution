using System;
internal class Program
{
    static void Main()
    {
        string a = Console.ReadLine().ToLower();
        string result = string.Empty;
        foreach (char s in a)
        {
            switch (s)
            {
                case 'a':
                    continue;
                case 'e':
                    continue;
                case 'i':
                    continue;
                case 'o':
                    continue;
                case 'u':
                    continue;
                case 'y':
                    continue;
                default:
                    result += "." + s;
                    break;
            }
        }
        Console.WriteLine(result);
    }
}
