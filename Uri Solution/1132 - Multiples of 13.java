import java.util.Scanner;
public class Main{
  public static void main(String[] args) {
    Scanner in= new Scanner(System.in);
    int A=in.nextInt();
    int B=in.nextInt();
    int m=0;
    if(A<B)
    {
        for(int i=A;i<=B;i++)
        {
            if(i%13!=0)
            {
                m=i+m;
            }
        }
        System.out.println(m);
    }
    else
    {
         for(int i=B;i<=A;i++)
        {
            if(i%13!=0)
            {
                m=i+m;
            }
        }
        System.out.println(m);
    }     
  }        
}
