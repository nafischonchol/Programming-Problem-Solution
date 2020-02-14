import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        if(a>0 && a<1000000)
        {   System.out.println(a);
            int r=a/100;
            a=a%100;
            System.out.println(r+" nota(s) de R$ 100,00");
            r=a/50;
            a=a%50;
            System.out.println(r+" nota(s) de R$ 50,00");
            r=a/20;
            a=a%20;
            System.out.println(r+" nota(s) de R$ 20,00");
            r=a/10;
            a=a%10;
            System.out.println(r+" nota(s) de R$ 10,00");
            r=a/5;
            a=a%5;
            System.out.println(r+" nota(s) de R$ 5,00");
            r=a/2;
            a=a%2;
            System.out.println(r+" nota(s) de R$ 2,00");
            r=a/1;
            a=a%1;
            System.out.println(r+" nota(s) de R$ 1,00");
        }
    }
}
