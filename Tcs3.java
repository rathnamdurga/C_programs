import java.util.*;
class Tcs3{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int n1=sc.nextInt();
        int b=n/n1;
        int c=n%n1;

        System.out.println(b + " " +c);        
    }
}