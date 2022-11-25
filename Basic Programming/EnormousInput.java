import java.util.*;

public class EnormousInput{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		int n=sc.nextInt();
		int k=sc.nextInt();
		int ctr=0;
		
		while(n>0){
		    int a=sc.nextInt();
		    if(a%k==0){
		        ctr++;
		    }
		    n--;
		}
		System.out.println(ctr);
        sc.close();
	}
}