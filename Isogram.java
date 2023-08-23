import java.util.*;
class Isogram{
    public static void main(String[] args){
        String s;
        int flag=0;
    Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        s=s.replace(" ", "");
        s=s.replace("-", "").toLowerCase();
        char[] ch=s.toCharArray();
        Arrays.sort(ch);
        for(int i=0;i<ch.length-1;i++){
            if(ch[i]==ch[i+1]){
                flag=1;
            }
        }
        if(flag==0){
            System.out.print("True");
        }
        
        else{
            System.out.println("false");
        }
    
    }
}