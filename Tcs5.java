import java.util.*;
class Tcs5{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String s1=sc.nextLine();
        int i=0,j=0;
        while(i<s.length() && j<s1.length()){
            if(s.charAt(i)==s.charAt(j)){
                i++;
                j++;
            }
            else if(s1.charAt(j)=='*' && ((s.charAt(i) >= 'a' && s.charAt(i)<= 'z')|| (s.charAt(i)<='A' && s.charAt(j)>='z'))){
                if(s.charAt(i+1)==s1.charAt(j+1)){
                    i++;
                    j++;
                }
                else{
                    i++;
                }
            }
            else{
                i++;
            }
        }
        if(i==s.length() && j==s1.length()){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
 }