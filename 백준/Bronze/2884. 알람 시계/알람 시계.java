import java.util.Scanner;

public class Main {
	public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int h = sc.nextInt();
        int m = sc.nextInt();
        
        if(m<45) {
        h-=1;
        m+=15;
        if(h<0) {
        	h+=24;
        }
        }
        else if(45 <= m && m<60) {
        m=m-45;
        }
        System.out.print(h+" "+m);
           }
}