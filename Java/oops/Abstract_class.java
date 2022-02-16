abstract class parent {
    public parent() {
        System.out.println("Main parent class ka constructor hoon ");
    }

    public void sayhello() {
        System.out.println("Say Hello ");
    }

    abstract public void greet1();

    abstract public void greet2();
}

class child1 extends parent {
    @Override
    public void greet1() {
        System.out.println("Good Morning ");
    }

    @Override
    public void greet2() {
        System.out.println("Good Afternoon ");
    }

}

abstract class child2 extends parent {
    public void th() {
        System.out.println(" I am Good ");
    }
}

public class Abstract_class {
    public static void main(String[] args) {

        // parent par = new parent(); ---->> through Error abstract class cannot be
        // instantiatted

        child1 obj = new child1();
        // child2 obj = new child2(); ---->> through Error abstract class cannot be
        // instantiatted
        obj.greet1();
        obj.greet2();
    }

}
