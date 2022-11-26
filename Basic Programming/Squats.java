import java.util.*;
public class Squats {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int x=sc.nextInt();
		    int sqt=x*15;
		    System.out.println(sqt);
		    t--;
		}
        sc.close();
	}
}
