import java.util.*;
class Reverse{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;
        while(n>0){
            int k=n%10;
            sum=sum*10+k;
            n=n/10;
        }
        System.out.println(sum);
    }
}