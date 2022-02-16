import java.util.ArrayList;

public class Array_list {
    public static void main(String[] args) {
        ArrayList<String> food = new ArrayList<String>();
        food.add("pizza");
        food.add("burger");
        food.add("sandwich");

        // food.set(0."sushi");          replace the 0th element with new element
        // food.remove(2);          remove the the 2nd element
        // food.clear();          clear the complete Array List

        System.out.println(food);
        for (int i = 0; i < food.size(); i++) {
            System.out.println(food.get(i));

        }
    }
}
