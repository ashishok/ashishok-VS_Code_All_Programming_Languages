interface Bicycle 
{
    int a = 10;   // this is final value of 'a' it cannot be changed
    void applybrake(int decrement);
    void speedup(int increment);
}
interface Hornblow
{
    void audi();
    void jaguar();
}
class avon implements Bicycle, Hornblow{ 
    void blowhorn()
    {
        System.out.println("peee pooo pee poo ");
    }
    public void applybrake(int decrement)
    {
        System.out.println("applying brake ");
    }
    public void speedup(int increment)
    {
        System.out.println("applying speed up");
    }
    public void audi()
    {
        System.out.println(" audi peee peee ");
    }
    public void jaguar()
    {
        System.out.println(" jaguar pee poo ");
    }
}
public class Interface {
    public static void main(String[] args) {
        avon inp = new avon();
        inp.applybrake(1);
        System.out.println(Bicycle.a);
        inp.audi();
        inp.jaguar();
    }
    
}
