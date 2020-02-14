import java.util.Scanner;
public class Main {
 public static void main(String[] args) {      
 Scanner in=new Scanner (System.in);
 int n=in.nextInt();
 int ans=0;
 for(int i=2;i<10000;i++)
 {
     ans=i%n;
     if(ans==2)
         System.out.println(i);
 }
 }
} 
