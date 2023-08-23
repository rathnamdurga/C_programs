import java.util.*;
class Last{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int index=-1;
        int n=sc.nextInt();
        int k=sc.nextInt();
        int arr[] = new int[n+1];
        for(int i=1;i<=n;i++){
            arr[i] = sc.nextInt();
        }
        for(int i=1;i<=n;i++){
            if(arr[i]==k){
                index=i;
            }
        }
            System.out.println(index);
    }
}
