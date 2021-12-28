using System;
 
namespace Bit_282A
{
    internal class Program
    {
        static void Main(string[] args)
        {
 
            int t = Int32.Parse(Console.ReadLine());
            string user_input;
            int result = 0;
            for (int i = 0; i < t; i++)
            {
                user_input = Console.ReadLine();
                if (user_input[0] == '+' || user_input[1] == '+')
                    result++;
                else if(user_input[0] == '-' || user_input[1] == '-')
                    result--;
            }
            Console.WriteLine(result);
        }
    }
}
