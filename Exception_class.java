import java.util.Scanner;

class Myexception extends Exception {
    public String toString() {
        return " i am toString()";
    }

    public String getMessage() {
        return " i am getMessage()";
    }
}

public class Exception_class {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        sc.close();
        if (a < 9)
            try {
                // throw new Myexception();
                throw new ArithmeticException(" this is arithmethic exception ");
            } catch (Exception e) {
                System.out.println(e.getMessage());
                System.out.println(e.toString());
                e.printStackTrace();
                System.out.println("finished");
            }
        System.out.println("yes finished");
    }

}
