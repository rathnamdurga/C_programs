import java.util.*;
public class Main
{
static void dk(int adj[][] ,int v){
  int distance[] = new int[v];
boolean vis[]=new boolean[v];
Arrays.fill(distance,Integer.MAX_VALUE);
distance[0]=0;
Arrays.fill(vis,false);
for(int j=0;j<v-1;j++){
int minvertex =minimum(distance,vis);
vis[minvertex]=true;
for( int i=0;i<v;i++){
if(adj[minvertex][i] !=0 && vis[i]==false){
    int curr=adj[minvertex][i];
    int total=curr+distance[minvertex];
    if(distance[i]>total){
        distance[i]=total;
    }
}
}
}for(int i=0;i<v;i++){
System.out.println(distance[i]);
}
}
static int minimum(int distance[],boolean[] vis){
int n=distance.length;
int minidx=-1;
int min=Integer.MAX_VALUE;
for(int i=0;i<n;i++){
if(vis[i]==false && distance[i]<min){
minidx=i;
min=distance[i];
}
}
return minidx;
}
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
//System.out.println("enter e:");
int e=sc.nextInt();
//System.out.println("enter v:");
int v=sc.nextInt();
int adj[][]=new int[v][v];
for(int i=0;i<e;i++){
   // System.out.println("enter sv:");
int sv=sc.nextInt();
//System.out.println("enter ev:");
int ev =sc.nextInt();
//System.out.println("enter wt:");
int wt=sc.nextInt();
adj[sv][ev]=wt;
adj[ev][sv]=wt;
}
dk(adj,v);
}
}
