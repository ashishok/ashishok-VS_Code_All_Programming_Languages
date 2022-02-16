class inh_cns {

    inh_cns() {
        System.out.println("I am a constructor");
    }

    inh_cns(int a) {
        System.out.println("I am a overloaded constructor and value of a is " + a);
    }

}

class derived extends inh_cns {
    derived() {
        super(1);
        System.out.println("I am a Constructor of derived class ");
    }

    derived(int x, int y) {
        super(x);
        System.out.println("I am a overload Constructor of derived class and value of y is " + y);
    }

}

class derivedchild extends derived {
    derivedchild() {
        System.out.println("I am child of derived class ");
    }

    derivedchild(int x, int y, int z) {
        super(x, y);
        System.out.println("I am overload derived child class and value of z is " + z);
    }

}

public class Super_Inheritance_constructor {
    public static void main(String[] args) {
        // derived D = new derived();
        // derived f = new derived(2, 3);
         new derivedchild(4, 5, 6);  //  ==   derivedchild D = new derivedchild(4, 5, 6);
    }
}
