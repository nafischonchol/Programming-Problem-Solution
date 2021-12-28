using System;
 
namespace Beautiful_Matrix_263A
{
    internal class Program
    {
        static void Main(string[] args)
        {
 
          
            int [,] user_input = new int [5,5];
            int [] index = new int [2];
            for (int i = 0; i < 5; i++)
            {
                string[] x = new string[5];
                x = Console.ReadLine().Split(" ");
 
                for (int j = 0; j < 5; j++)
                {
                    user_input[i, j] = Int32.Parse(x[j]);
                    if (user_input[i, j] == 1)
                    {
                        index[0] = i;
                        index[1] = j;
                    }
                }
            }
            int result1 = 0,result2=0;
            if(index[0]>2)
                result1 = index[0]-2;
            else
                result1 = 2-index[0];
            if (index[1] > 2)
                result2 = index[1] - 2;
            else
                result2 = 2 - index[1];
            Console.WriteLine(result1+result2);
 
        }
    }
}
