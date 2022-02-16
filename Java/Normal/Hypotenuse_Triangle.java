import java.util.Scanner;

public class Hypotenuse_Triangle {

    public static void main(String[] args) {
        Scanner any = new Scanner(System.in);

        System.out.println("Enter the First Side of the Triangle");
        double First = any.nextDouble();

        System.out.println("Enter the Second side of the Triangle");
        double Second = any.nextDouble();

        double Hypotenuse = Math.sqrt((First * First) + (Second * Second));
        System.out.println("Hypotenuse of the Triangle is " + Hypotenuse);

        any.close();
    }
}