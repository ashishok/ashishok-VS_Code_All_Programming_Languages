public class try_catch {
    public static void main(String[] args) {
        int a = 5000;
        int b = 0;
        try {
            int c = a / b;
            System.out.println("The result is " + c);
        } catch (Exception e) {
            System.out.print("We failed to devide because ");
            System.out.println(e);
        }
        System.out.println("The end of the program ");
    }

}
