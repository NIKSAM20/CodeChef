import java.util.*;
public class FindRemainder
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int t=sc.nextInt();
		while(t>0){
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		    
		    int remainder= a%b;
            System.out.println(remainder);
            t--;
		}
        sc.close();
	} 
}