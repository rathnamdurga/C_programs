import java.util.*;
public class Dfs{
    static void dfs(int sv, boolean vis[],int adj[][]){
       System.out.println(sv);
        vis[sv]=true;
        for(int i=0;i<vis.length;i++){
            if(adj[sv][i]==1 && vis[i]==false)
            dfs(i,vis,adj);

        }
        
    }
	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
int e=sc.nextInt();
int v=sc.nextInt();
boolean vis[]=new boolean[v];
Arrays.fill(vis,false);
int adj[][]=new int[v][v];
for(int i=0;i<e;i++){
int sv=sc.nextInt();
int ev =sc.nextInt();
adj[sv][ev]=1;
adj[ev][sv]=1;
	}
	int sv=sc.nextInt();
	dfs(sv,vis,adj);
}
}
