import java.util.*;

public class RelationalOperator
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		
		while(n!=0){
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		
		    if(a<b){
		        System.out.println("<");
		    }
		    else if(a==b){
		        System.out.println("=");
		    }
		    else{
		        System.out.println(">");
		    }
		    n--;
		}
        sc.close();
	}
}