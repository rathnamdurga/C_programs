import java.util.*;
class Tcs2{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a=n%10;
        int b=n/1000;
        System.out.println(a +" "+ b); 
        int c=a+b;

        System.out.println(Math.abs(c));        
    }
}