import java.util.*;
class ATM{
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		float x=sc.nextInt();
		float y=sc.nextFloat();
		
		if((x%5==0) && (y>=x+0.5f)){
		    float bal=y-x-0.5f;
		    System.out.println(bal);
		}
		else{
		    System.out.println(y);
		}
	}
    sc.close();
}