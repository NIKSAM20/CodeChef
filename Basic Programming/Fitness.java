import java.util.*;
public class Fitness {
    public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int x=sc.nextInt();
		    System.out.println(x*5*2);
		    t--;
		}
        sc.close();
	}
}