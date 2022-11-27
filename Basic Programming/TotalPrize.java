import java.util.*;
public class TotalPrize {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		   
		    int total=(10*x)+(90*y);
		    System.out.println(total);
		    t--;
		}
	}
}