import java.util.Scanner;
public class Main {
    public static void main(String[] args){
       Scanner sc =new Scanner(System.in);
       int n=sc.nextInt();
        for(int i=1;i<=n;i++)
       { 
           int a=sc.nextInt();
           if(a==0 || a==1)
               System.out.println(a+" nao eh primo");
           else{
                int tam=0;
                int x=(int)Math.sqrt(a);

                for(int j=2;j<x+1;j++)
                {
                    if(a%j==0)
                    {
                        tam++;
                        break;
                    }
                }
                if(tam==0)
                    System.out.println(a+" eh primo");
                else
                    System.out.println(a+" nao eh primo");
           }
           
       }
      
    }
}
