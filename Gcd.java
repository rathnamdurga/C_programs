import java.util.*;
public class Gcd{
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        if(a==0)
        System.out.println(b);
        else if(b==0)
        System.out.println(a);
        else{
            while(a!=b){
                if(b>a){
                    b=b-a;
                }
                else{
                    a=a-b;
                }
            }
        }

System.out.print(a);

    }


}