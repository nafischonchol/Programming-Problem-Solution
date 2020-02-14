import java.util.Scanner;
public class Main {
    public static void main(String[] args){
       Scanner in=new Scanner(System.in);
       float l=in.nextFloat();
       int n=(int)(l*100);
       int a;
       System.out.println("NOTAS:");
       a=n/10000;
       n=n%10000;
       System.out.println(a+" nota(s) de R$ 100.00");
       a=n/5000;
       n=n%5000;
       System.out.println(a+" nota(s) de R$ 50.00");
       a=n/2000;
       n=n%2000;
       System.out.println(a+" nota(s) de R$ 20.00");
       a=n/1000;
       n=n%1000;
       System.out.println(a+" nota(s) de R$ 10.00");
       a=n/500;
       n=n%500;
       System.out.println(a+" nota(s) de R$ 5.00");
       a=n/200;
       n=n%200;
       System.out.println(a+" nota(s) de R$ 2.00");
       System.out.println("MOEDAS:");
       a=n/100;
       n=n%100;
       System.out.println(a+" moeda(s) de R$ 1.00");
       a=n/50;                                                                                  
       n=n%50;
       System.out.println(a+" moeda(s) de R$ 0.50");
       a=n/25;
       n=n%25;
       System.out.println(a+" moeda(s) de R$ 0.25");
       a=n/10;
       n=n%10;
       System.out.println(a+" moeda(s) de R$ 0.10");
       a=n/5;
       n=n%5;
       System.out.println(a+" moeda(s) de R$ 0.05");
       System.out.println(n+" moeda(s) de R$ 0.01");
    }
}  
