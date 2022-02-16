import java.util.Random;

public class Random_num {
    public static void main(String[] args) {
        Random random = new Random();
        int x = random.nextInt(6) + 1; // +1 here will generates the random number between 1 to 6
        double y = random.nextDouble(5);
        boolean z = random.nextBoolean();
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
    }
}
