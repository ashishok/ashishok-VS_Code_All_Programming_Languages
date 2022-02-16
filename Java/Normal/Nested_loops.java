import java.util.Scanner;

public class Nested_loops {
    public static void main(String[] args) {
        int a = 1;
        Scanner input = new Scanner(System.in);

        for (int i = 1; i <= 3; i++)
        {
            System.out.println();
            for (int j = 1; j < 5; j++) {
                System.out.print(a);
            }
        }
        input.close();
    }
}
