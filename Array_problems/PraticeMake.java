import java.util.*;

public class PraticeMake {
    public static void main (String[] args)
	{
		int ctr=0, i;
		Scanner sc= new Scanner(System.in);
		int arr[]= new int[4];

		for(i=0; i<4; i++){
			arr[i]=sc.nextInt();
		}
		for(i=0; i<4; i++){
			if(arr[i]>=10){
				ctr++;
			}
		}
		System.out.print(ctr);
		sc.close();
	}
}