using System;
 
class Program
{
    static void Main() {
        int t = Int32.Parse(Console.ReadLine());
        for(int i=0;i<t;i++)
        {
            string s = Console.ReadLine();
            string [] parts = s.Split(" ");
            int r = Int32.Parse(parts[0]);
            int c = Int32.Parse(parts[1]);
            int rpr = Int32.Parse(parts[2]);
            int rpc = Int32.Parse(parts[3]);
            int dpr = Int32.Parse(parts[4]);
            int dpc = Int32.Parse(parts[5]);
            
            int result = 0;
           
            bool rc = true , cc = true;
 
            while(true)
            {
                
                if(rpr ==  dpr || rpc == dpc)
                {
                    Console.WriteLine(result);
                    break;
                }
                else
                {
                    result++;
                    
                    if(rpr < r && rc == true)
                    {
                        rpr++;
                    }
                    else if(rpr == 1)
                    {
                        rpr++;
                        rc = true;
                    }
                    else
                    {
                        rpr--;
                        rc =  false;
                    }
                    
                   
                    if(rpc < c && cc == true)
                    {
                        rpc++;
                    }
                    else if(rpc == 1)
                    {
                        rpc++;
                        cc = true;
                    }
                    else
                    {
                        rpc--;
                        cc =  false;
                    }
    
                }
            }
        }
        
    }
}
