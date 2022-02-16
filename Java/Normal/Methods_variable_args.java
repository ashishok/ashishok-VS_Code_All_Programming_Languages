public class Methods_variable_args {
    static int sum(int... arr) {              // static int sum(int x , int ...arr)    here int x means atleast 1 argument is needed
        int result = 0;
        for (int a : arr) {
            result += a;
        }
        return result;
    }

    public static void main(String[] args) {
        // int c = sum();
        // int c = sum(2);
        int c = sum(3, 4);
        // int c = sum(5, 6, 9);
        System.out.println(c);
    }
}
