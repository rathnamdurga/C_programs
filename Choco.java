import java.util.*;
class Choco{
    static int minchoco(int n){
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(n==3){
            return 3;
        }
        int c=2,x=1;
        while(n>1){
            if(n-(x)>=1){
                c=c+1;
                n=n-x;
            }
            if(n-(x+1)>=1){
                c=c+1;
                n=n-(x+1);
                x=x+1;
            }
            if(n-(x-1)>=1){
                c=c+1;
                n=n-(x-1);
                x=x-1;
            }
            
        }
        return c;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int arr[]=new int[N];
        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<N;i++){
            System.out.println(minchoco(arr[i]));
        }

    }
}