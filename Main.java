
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;


public class Main {
	
	
	public static void main (String [] args) {
		
		Scanner in = new Scanner(System.in);
		
		int casos, num2;
        double soma_p, soma_c;  
		
		while(true) {
			
			casos = in.nextInt();
			
			if(casos == 0)  return;

            soma_c = soma_p = 0;

            List<Pair<Int, Int>> lista = new ArrayList<>();
            Pair <Int, Int> par = new Pair<> ();
                
            };
			
			for(int i = 0; i < casos; i++) {
				
                par.setkey(in.nextInt());
                par.setValue(par.getKey() / in.nextInt());

                soma_p +=(double) par.getKey;
                soma_c +=(double) par.getKey;
			}
		}
		
		in.close();
	}
}
