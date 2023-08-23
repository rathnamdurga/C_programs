import java.util.*;
public class Count
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int r1=sc.nextInt();
		int r2=sc.nextInt();
		int r3=sc.nextInt();
		int count=0;
		if(r1<r2){
		    while(n>r1){
		    n=n-r1;
		    count++;
		   }
		}
		if(r2<r1){
		    while(n>r2){
		    n=n-r2;
		    n=n+r3;
		    count++;
		}
	}
		System.out.println(count);
	}
}