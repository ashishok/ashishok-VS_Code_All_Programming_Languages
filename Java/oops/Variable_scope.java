import java.util.Random;

//  FOR LOCAL VARIABLES ::--

class Diceroller
{
  int a; //ignore this line
    Diceroller()
    {
      Random random = new Random();
      int number = 0;
        roll(random, number);
      }    
    void roll (Random random,int number)
    {
        number = random.nextInt(6)+1;
        System.out.println(number);
    }
}

public class Variable_scope {
    public static void main(String[] args) {
        Diceroller diceroller =  new Diceroller(); 
        diceroller.a= 3;   // ignore this line
    }
    
}



                                 //     FOR GLOBAL VARIABLES ::--

                                 

// class Diceroller
// {
//   Random random;
//       int number = 0;
//     Diceroller()
//     {
//       random = new Random();
//         roll();
//       }    
//     void roll  ()
//     {
//         number = random.nextInt(6)+1;
//         System.out.println(number);
//     }
// }

// public class Variable_scope {
//     public static void main(String[] args) {
//         Diceroller diceroller =  new Diceroller(); 
//     }
    
// }

