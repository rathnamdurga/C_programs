
import java.util.*;
class Tcs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = sc.nextLine();
        String s1 = "";
        for (int i = 0; i < s.length(); i++) {
            if ( i!=s.length()-1 && s.charAt(i) == 'E' && s.charAt(i + 1) == 'F') {
                i++;
            } 
            else if (s.charAt(i) == 'G') {
                s1 += "";
            } 
            else {
                s1 += s.charAt(i);
            }
        }
        System.out.println(s1);
    }
}
