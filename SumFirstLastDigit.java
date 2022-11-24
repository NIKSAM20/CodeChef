import java.util.*;
public class SumFirstLastDigit {
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n,t,sum=0,rem=0;
		
		t=sc.nextInt();
		while(t!=0){
		    
		    n=sc.nextInt();
		    sum=n%10;
		    while(n!=0){
		        rem=n%10;
		        n=n/10;    
		    }
		    sum=sum+rem;
		    System.out.println(sum);
		    t--;  
			sc.close();
		}
	}
}