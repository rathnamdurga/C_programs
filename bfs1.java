import java.util.*;
public class Main{
    void bfs(int v , int sv , int adj[][])
    {
        if(v==0)
            return ;
        Queue<Integer> queue = new LinkedList<>();
        boolean vis[] = new boolean[v];
        queue.add(sv);
        vis[sv] = true;
        while(queue.size() > 0)
        {
            int front = queue.poll();
            System.out.print(front + " ");
            for(int i=0 ;i<v ;i++)
            {
                if(adj[front][i]==1 && vis[i]==false)
                {
                    queue.add(i);
                    vis[i]=true;
                }
            }
        }
    }
	public static void main(String[] args) 
	{
	    Scanner sr= new Scanner(System.in);
	    int v = sr.nextInt();
	    int e= sr.nextInt();
	    int adj[][] = new int[v][v];
	    for(int i=0 ;i < e; i++)
	    {
	        int sv = sr.nextInt();
	        int ev = sr.nextInt();
	        adj[sv][ev  ]=1;
	        adj [ev][sv]=1;
	    }
	    bfs(v,0,adj);
	    
	    
	}
}
