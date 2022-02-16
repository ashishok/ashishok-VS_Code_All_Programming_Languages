// import java.util.Base64;

// import java.util.Base64;

class Inherit
{
     
        int x;
        public void setx(int x)
        {
            System.out.print("I am in Inherit and setting the X now to -->  ");
            this.x = x;
        } 
        public int getx()
        {
            return x;
        }
        public void printme()
        {
            System.out.println("Printing me ");
        }
    
}
class Derived extends Inherit
{
    int y ;
    public void sety(int y)
    {
        System.out.print("I am in Derived and setting the Y  now to -->  ");
        this.y = y;
    }
    public int gety()
    {
        return y;
    }
}

public class Inheritance {
    public static void main(String[] args) {

        // creating  an object of Inherit class 
        Inherit I = new Inherit();     //   OR     Derived I = new Derived();
        I.setx(4);
        System.out.println(I.getx());


        // creating an object of derived class 
        Derived D = new Derived();
        D.sety(41);
        System.out.println(D.gety());
    }
    
}
