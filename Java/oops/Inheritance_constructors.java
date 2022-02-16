class inh_cns {

    inh_cns() {
        System.out.println("I am a constructor");
    }

}

class derived extends inh_cns {
    derived() {
        System.out.println("I am a Constructor of derived class ");
    }

}

public class Inheritance_constructors {
    public static void main(String[] args) {
        new derived();   //  is also equals to   -=--->  derived D = new derived();
    }

}
