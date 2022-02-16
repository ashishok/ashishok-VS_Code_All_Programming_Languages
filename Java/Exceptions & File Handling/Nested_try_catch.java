import java.util.Scanner;

public class Nested_try_catch {
    public static void main(String[] args) {
        int[] marks = new int[3];
        marks[0] = 3;
        marks[1] = 1;
        marks[2] = 2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array index ");

        int ind = sc.nextInt();

        try {
            System.out.println("welcome");
            try {
                System.out.println(marks[ind]);
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("sorry this index doesnot exist ");
                System.out.println("Exception in level 2 ");

            }

        } catch (Exception e) {
            System.out.println("Exception in level 1");
        }
        sc.close();
    }

}
