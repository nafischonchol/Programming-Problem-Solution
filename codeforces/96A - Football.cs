using System;
 
class Program
{
    static void Main() 
    {
        string a = Console.ReadLine();
        Program p = new Program();
        bool x = p.isDanger(a);
    }
    
    internal bool isDanger(string a)
    {
     
        int count = 1;
        int l=a.Length;
        for(int i=0;i<l-1;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
                if(count==7)
                {
                    Console.WriteLine("YES");
                    return true;
                }
            }
            else
            {
                count=1;
                
            }
           
        }
        if(count==6 && a[l-1]==a[l-2])
        {
            Console.WriteLine("YES");
            return true;
        } 
        else
        {
            Console.WriteLine("NO");
            return false;
        }
    }
}
