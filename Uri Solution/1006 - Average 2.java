import java.util.Scanner;


public class Main {

    public static void main(String[] args){

            float A, B,C, med;
            Scanner sc = new Scanner(System.in);
            A = sc.nextFloat();
            B = sc.nextFloat();
            C=sc.nextFloat();
            med = (float) (((A * 2) + (B * 3)+(C*5)) / (2+3+5));
            String media = String.format("MEDIA = %,.1f", med);
            System.out.print(media +"\n");

    }

}
