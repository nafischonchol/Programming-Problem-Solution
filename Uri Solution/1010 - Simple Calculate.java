import java.util.Scanner;
public class Main {
    public static void main(String[] args){
            Scanner in=new Scanner(System.in);
            int c1=in.nextInt();
            int u1=in.nextInt();
            float p1=in.nextFloat();
            int c2=in.nextInt();
            int u2=in.nextInt();
            float p2=in.nextFloat();
            float total=(u1*p1)+(u2*p2);
            System.out.printf("VALOR A PAGAR: R$ %.2f\n",total);
       } 
}
