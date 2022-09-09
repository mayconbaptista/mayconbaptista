import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);

            System.out.println("================================");

            for(int i=0;i<3;i++)
            {
                String s1 = sc.next();

                int x=sc.nextInt();
                
                for(int j = 0; j < (15 - s1.length()); j++)
                {
                    s1.concat(" ");
                }
                System.out.println(s1);

                String num = Integer.toString(x);
                
                for(int j = 0; j < (3 - num.length()); j++){
                    num = "0" + num;
                }

                System.out.println(num);
            }
            System.out.println("================================");

    }
}



