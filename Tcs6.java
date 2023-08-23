import java.util.*;
class Tcs6{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int s=n;
        int sum=0;
        while(n>0){
            int k=n%10;
            sum+=fact(k);
            n=n/10;
        }
        System.out.println(sum);
    if(sum==s){
        System.out.println("YES");
    }
    else{
        System.out.println("NO");
    }

    }
    public static int fact(int n){
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * fact(n - 1);
        }
    }

    }