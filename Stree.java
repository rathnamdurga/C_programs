import java.util.*;
class Stree{
    static int[] segment = new int[40000];
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        build(0,0,n-1,arr);
        int q=sc.nextInt();
        while(q>0){
		    int l=sc.nextInt();
		    int r=sc.nextInt();
		    int ans=fun(0,l,r,0,n-1);
		    System.out.println(ans);
		    q--;
		}


    }
    public static void build(int index,int low,int high,int arr[]){
        if(low==high){
            segment[index]=arr[low];
            return;
        }
        int mid=(low +high)/2;
        build(2*index+1,low,mid,arr);
        build(2*index+2,mid+1,high,arr);
        segment[index]=Math.max(segment[2*index+1] ,segment[2*index+2]);
    }
    public static int fun(int index,int l,int r,int low,int high){
        if(low>=l && high<=r){
            return segment[index];
        }
        if(high<l || low>r){
            return Integer.MIN_VALUE;
        }
        int mid=(low+high)/2;
        int a=fun(2*index+1,l,r,low,mid);
        int b=fun(2*index+2,l,r,mid+1,low);
        return Math.max(a,b);

    }
}