import java.util.Scanner;
public class Main {
    public static void main(String[] args){       
       Scanner sc =new Scanner(System.in);
       int a=sc.nextInt();
       int b=sc.nextInt();
       int c=sc.nextInt();
       int max = getMax(c,getMax(a,b)); 
       System.out.println(max+" eh o maior");
    }
    private static int getMax(int a,int b)
    {
        int maxAB=(a+b+Math.abs(a-b))/2;
        return  maxAB;
    }
}
