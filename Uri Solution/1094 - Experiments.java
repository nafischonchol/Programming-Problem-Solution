import java.util.Scanner;
public class Main {
 public static void main(String[] args) {      
 Scanner in=new Scanner (System.in);
 int co = 0;
 
 int r = 0;
 int s = 0;
 int n=in.nextInt();
 for(int i=1;i<=n;i++)
 {
     int a=in.nextInt();
     String c=in.next();
     if(c.equals("C"))
     
         co=co+a;
        
     
     else if(c.equals("R"))
         r=r+a;
     else if(c.equals("S"))
         s=s+a;
 }
 int t=co+r+s;
 System.out.printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",t,co,r,s);
 double cp=(double)(co*100)/t;
 double rp=(double)(r*100)/t;
 double sp=(double)(s*100)/t;
 System.out.printf("Percentual de coelhos: %.2f ",cp);
 System.out.print("%\n");
 System.out.printf("Percentual de ratos: %.2f ",rp);
 System.out.print("%\n");
 System.out.printf("Percentual de sapos: %.2f ",sp);
 System.out.print("%\n");
 }
}
