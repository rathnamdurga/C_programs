import java.util.*;
  public class Main1
  {
      public static void dfs(boolean vis[],int sv, ArrayList<ArrayList<Integer>> adj) {
          System.out.println(sv);
          vis[sv] = true;
          for(int i = 0; i < adj.get(sv).size();i++) {
              if(vis[adj.get(sv).get(i)] == false) {
                  dfs(vis, adj.get(sv).get(i), adj);
              }
          }
      }
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int v = sc.nextInt();
      int e = sc.nextInt();
      ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(v);
      for(int i = 0; i < v;i++) {
          adj.add(new ArrayList<>());
      }
      for(int i = 0; i < e;i++) {
        int sv = sc.nextInt();
        int ev = sc.nextInt();
        adj.get(sv).add(ev);
        adj.get(ev).add(sv);
      }
      boolean []vis = new boolean[v];
      dfs(vis,0, adj);
    }
  }