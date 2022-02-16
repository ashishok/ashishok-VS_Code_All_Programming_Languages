import java.util.Scanner;

public class Input_data {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("Enter a Number ");
        int a = input.nextInt();
        System.out.println("Enter a Float Number ");
        float b = input.nextFloat();
        input.nextLine();
        System.out.println("Enter a String ");
        String c = input.nextLine();
        boolean d = input.hasNextInt();     // Tells Weather a number is Integer or not

        System.out.println("you have Written " + a);
        System.out.println("you have Written " + b);
        System.out.println("you have Written " + c);
        System.out.println(d);
        input.close();
    }
}
