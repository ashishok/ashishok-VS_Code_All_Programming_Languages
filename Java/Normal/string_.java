import java.util.Scanner;

public class string_ {
    public static void main(String[] args) {
        Scanner hi = new Scanner(System.in);

        
        // String name;
        // name = new String("ashish");
        // String name = new String("ashsih");
        String name = "ashish";

        System.out.println(name);
        System.out.printf("%s",name);
        System.out.println();
        System.out.format("%s\n",name);

        
        System.out.println("write some thimg");
        String inp = hi.nextLine();
        System.out.println(inp);
        

        hi.close();
    }

}
