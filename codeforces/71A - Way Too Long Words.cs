using System;
 
namespace Way_Too_Long_Words_71_A
{
    internal class Program
    {
        static void Main(string[] args)
        {
 
            int t = Int32.Parse(Console.ReadLine());
            string user_input;
            for (int i = 0; i < t; i++)
            {
                user_input = Console.ReadLine();
                if (user_input.Length > 10)
                {
                    int l = user_input.Length;
                    string mid = (l - 2).ToString();
 
                    string result = user_input[0] + mid + user_input[l - 1];
                    Console.WriteLine(result);
                }
                else
                {
                    Console.WriteLine(user_input);
                }
            }
        }
    }
}
