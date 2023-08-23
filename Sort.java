import java.util.Arrays;

public class Sort {
    public static void main(String[] args) {
        String[] input = {"geeksforgeeks", "geeks", "geek", "geezer"};

        // Sort the array in lexicographical order
        Arrays.sort(input);

        // Print the sorted array
        System.out.println("Sorted array:");
        for (String s : input) {
            System.out.println(s);
        }
    }
}