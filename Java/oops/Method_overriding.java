class A {
    int a;

    int Ashish() {
        return 4;
    }

    void meth2() {
        System.out.println("I am method 2 class A ");
    }

}

class B extends A {
    @Override // tells that the method is override
    void meth2() {
        System.out.println("I am method 2 of class B");
    }

    void meth3() {
        System.out.println("I am method 3 of class B");
    }
}

public class Method_overriding {
    public static void main(String[] args) {
        A a = new A();
        a.meth2();
        B b = new B();
        b.meth2();
    }
}