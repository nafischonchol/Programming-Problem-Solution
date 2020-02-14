import java.util.Scanner;
public class Main {
    public static void main(String[] args){
       int a;
       Scanner sc =new Scanner(System.in);
       a =sc.nextInt();
       int y=a/365;
       int day=a%365;
       int m=day/30;
       int days=day%30;
       System.out.println(y+" ano(s)");
       System.out.println(m+" mes(es)");
       System.out.println(days+" dia(s)");
    }
}
