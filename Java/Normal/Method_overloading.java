public class Method_overloading {

    static  void foo()
    {
        System.out.println("good morning ");
    }
    static  void foo(int a )
    {
        System.out.println("good morning " + a);
    }
    static void  foo(int x , int y)
    {
        System.out.println("good morning " + x);
        System.out.println("good morning " + y);
    }
    public static void main(String[] args) {
        
        foo();
        foo(100);
        foo(200, 300);
    }
}
