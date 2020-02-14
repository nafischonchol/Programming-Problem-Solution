import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int A=in.nextInt();
        int B=in.nextInt();
        if(A<B)
        {
            for(int i=A+1;i<B;i++)
            {
                if(i%5==2 || i%5==3)
                {
                    System.out.println(i);
                }
            } 
        }
        else
        {
            for(int i=B+1;i<A;i++)
            {
                if(i%5==2 || i%5==3)
                {
                    System.out.println(i);
                }
            } 
        }
    }
}
