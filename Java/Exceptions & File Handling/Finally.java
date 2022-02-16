public class Finally {
    public static int greet() {
        try {
            int a = 30;
            int b = 10;
            int c = a / b;
            return c;
        } catch (Exception e) {
            System.out.println(e);
        } finally {
            System.out.println("this is end of this function ");
        }
        return -1;
    }

    public static void main(String[] args) {
        int k = greet();
        System.out.println(k);
        int a = 7;
        int b = 9;
        while (true) {
            try {
                System.out.println(a / b);

            } catch (Exception e) {
                System.out.println(e);
                break;
            } finally {
                System.out.println(" i am finally for the valur of  b = " + b);
            }
            b--;
        }
        try {
            System.out.println(5 / 0);
        } finally {
            System.out.println("yes this is finaly ");
        }
    }

}
