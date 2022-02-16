public class Precedence_Associativity {
    public static void main(String[] args) {

        int a = 6 * 5 - 34 / 2;  // They are evaluated on the basis of Precedence (* to / )
        /*
          = 30- 34/2 
          = 30-17 
          = 13
         */



        int b = 60 / 5 - 4 * 2;  // since precedence is not applicable here so ,they are evaluated on the basis of Associativity (left to Right)
        /*
           = 12 - 4*2 
           = 12 - 8 
           = 4
         */

        System.out.println(a);
        System.out.println(b);
    }
}
