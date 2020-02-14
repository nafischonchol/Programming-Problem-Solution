import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner in=new Scanner (System.in);
 double x1=in.nextDouble();
 double y1=in.nextDouble();         
 double x2=in.nextDouble();
 double y2=in.nextDouble();
 double distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
 distance=Math.sqrt(distance);

 System.out.printf("%.4f\n",distance);
 
 }
} 
