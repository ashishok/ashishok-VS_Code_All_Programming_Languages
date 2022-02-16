interface Sample {
    void meth1();

    void meth2();
}

interface SampleChild extends Sample {
    void meth3();

    void meth4();
}

class cls implements SampleChild {
    public void meth1() {
        System.out.println("Meht1");
    }

    public void meth2() {
        System.out.println("Meth2");
    }

    public void meth3() {
        System.out.println("Meth3");
    }

    public void meth4() {
        System.out.println("Meht4");
    }
}

public class Inheritance_in_Interface {
    public static void main(String[] args) {
        cls cl = new cls();
        cl.meth1();
        cl.meth2();
        cl.meth3();
        cl.meth4();
    }
}
