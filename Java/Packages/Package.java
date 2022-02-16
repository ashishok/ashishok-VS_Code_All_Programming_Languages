
import java.util.Scanner;
// import java.util.*;

public class Package {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            // java.util.Scanner sc = new java.util.Scanner(System.in);
            int a = sc.nextInt();
            System.out.println("This is My Scanner class taking input as " + a);
        }
    }
}
