public class arrays {
    public static void main(String[] args) {

        // String[] cars ; // declaration
        // cars = new String[]; Memory allocation
        // String[] marks = { "ashish", "vikash", "saurav" }; // Declare + Initialize
        String  [] cars = new String[3];   // or String cars [] = new String[3]; // Declaration + Memory allocation
        cars[0] = "a";
        cars[1] = "b";
        cars[2] = "c";
        for (int i = 0; i < cars.length; i++) { // cars.length() & cars.length works diffrent in diffrent cases
            System.out.println(cars[i]);
        }
    }
}
