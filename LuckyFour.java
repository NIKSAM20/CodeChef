public class LuckyFour {
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n,t,rem=0;
		
		t=sc.nextInt();
		while(t!=0){
		    n=sc.nextInt();
		    int ctr=0;
		    while(n!=0){
		        rem=n%10;
		        if(rem==4){
		            ctr++;
		        }
		        n=n/10;
		    }
		    System.out.println(ctr);
		    t--;    
		}
		sc.close();
	}
}
