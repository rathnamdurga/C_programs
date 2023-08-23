import java.util.*;

class Dis {
    /**
     * @param args
     */
    static int size[] = new int[10001];
    static int parent[] = new int[10001];

    public static void main(String args[]){
        int count=0;
        Scanner sc=new Scanner(System.in);
        int v=sc.nextInt();
        int e=sc.nextInt();
        for(int i=0;i<v;i++){
            make(i);
        }
        for(int i=0;i<e;i++){
           int sv=sc.nextInt();
           int ev=sc.nextInt();
           union(sv,ev);
        }
        for(int i=0;i<v;i++){
           if(i==parent[i])
           count++;
        }
        if(count==1){
            System.out.println("connected graph");
        }
        else{
            System.out.println("not connected graph");
        }
    }

        public static void make(int v){
            parent[v]=v;
            size[v]=1;
        }
        public static int find(int v){
            if(v==parent[v])
                return v;
                return parent[v]=find(parent[v]);
        }
        public static void union(int a,int b){
            a=find(a);
            b=find(b);
            if(a==b){
                return;
            }
            if(size[a]<size[b]){
                int temp=a;
                a=b;
                b=temp;
            }
            parent[b]=a;
            size[a]+=size[b];
        }


}