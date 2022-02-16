import java.util.Scanner;

public class handle_specific_exception {
    public static void main(String[] args) {
        int[] marks = new int[3];
        marks[0] = 3;
        marks[1] = 1;
        marks[2] = 2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array index ");
        int ind = sc.nextInt();
        System.out.println(" Enter the number you want to divide the value with ");
        int number = sc.nextInt();
        try {
            System.out.println(" the value at array index entered is " + marks[ind]);
            System.out.println(" the value at array-value/number is " + marks[number]);
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException exception occured ");
            System.out.println(e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(" ArrayIndexOutOfBoundsException exception  ");
            System.out.println(e);
        } catch (Exception e) {
            System.out.println("some exception occured ");
            System.out.println(e);
        }
        sc.close();

    }
}
