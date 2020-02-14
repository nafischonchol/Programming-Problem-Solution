import java.util.Scanner;
public class Main {
 public static void main(String[] args) {      
 Scanner in=new Scanner (System.in);
 int x=in.nextInt();
 int y=in.nextInt();
 double z=0;
     switch (x) {
         case 1:
             z=y*4.00;
             break;
         case 2:
             z=y*4.50;
             break;
         case 3:
             z=y*5.00;
             break;
         case 4:
             z=y*2.00;
             break;
         case 5:
             z=y*1.50;
             break;
         default :
             break;
     }
      System.out.printf("Total: R$ %.2f\n",z);
 
 }
} 
