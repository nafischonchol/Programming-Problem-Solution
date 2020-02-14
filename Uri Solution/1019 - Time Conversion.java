import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
  
  Scanner input =new Scanner(System.in);
  int x=input.nextInt();
  int n;
  n=x/3600;
  x=x%3600;
  System.out.print(n+":");
  n=x/60;
  x=x%60;
  System.out.print(n+":");
  System.out.println(x);
   }
}
