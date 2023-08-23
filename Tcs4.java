import java.util.*;
class Tcs3{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        List<Integer> l=new ArrayList<>();
        int n=sc.nextInt();
        int arr[]=new int[n];
        int m1;
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int k=sc.nextInt();
        for(int i=0;i<n-k+1;i++){
             m1=arr[i];
            for(int j=1;j<k;j++){
                if(m1<arr[i+j]){
                    m1=arr[i+j];
                }
            }
            l.add(m1);
        }

       for(int i=0;i<l.size();i++){
        System.out.println(l.get(i));
       }

    }
}