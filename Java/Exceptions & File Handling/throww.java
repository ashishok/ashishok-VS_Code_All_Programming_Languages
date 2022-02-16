class Negaticeexception extends Exception {
    public String toString() {
        return " radius cannot be negative ";
    }

    public String getMessage() {
        return "  radius cannot be negative";
    }
}

public class throww {
    public static double area(int r) throws Negaticeexception {
        if (r < 0) {
            throw new NegativeArraySizeException();
        }
        double result = Math.PI * r * r;
        return result;

    }

    public static int divide(int a, int b) throws ArithmeticException {
        int result = a / b;
        return result;

    }

    public static void main(String[] args) {
        try {
            int c = divide(3, 2);
            System.out.println(c);
            double ar = area(6);
            System.out.println(ar);
        } catch (Exception e) {
            System.out.println("Exception ");
        }

    }
}
