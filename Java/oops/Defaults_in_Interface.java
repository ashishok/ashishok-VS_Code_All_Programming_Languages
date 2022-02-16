interface MyCamera {
    void takesnap();

    void recordvideo();

    private void greet() {
        System.out.println(" Good Morning ");
    }

    default void record4K() {
        greet(); // as private methods cannot be acessed by any other class
        System.out.println(" Recording 4K videos... ");
    }
}

interface MyWifi {
    String[] getnetworks();

    void connectToNetwork(String network);
}

class MyCellPhone {
    void callNumner(int phoneNumber) {
        System.out.println(" calling " + phoneNumber);
    }

    void pickCall() {
        System.out.println(" Connecting... ");
    }
}

class Smartphone extends MyCellPhone implements MyCamera, MyWifi {
    public void takesnap() {
        System.out.println(" Taking snap... ");
    }

    public void recordvideo() {
        System.out.println(" Taking video... ");
    }

    // public void record4K() {
    //     System.out.println(" Taking snap and Recording in 4K... ");     ---> can be override with  line 10 , its optional 
    // }

    public String[] getnetworks() {
        System.out.println(" Getting List of Networks... ");
        String[] networkList = { "Tenda", "Excitel", "Airtel" };
        return networkList;
    }

    public void connectToNetwork(String network) {
        System.out.println(" Connecting to " + network);
    }
}

public class Defaults_in_Interface {
    public static void main(String[] args) {
        Smartphone ms = new Smartphone();
        ms.record4K();
        String[] ar = ms.getnetworks();
        for (String item : ar) {
            System.out.println(item);
        }
        ms.connectToNetwork("Ashish");
    }

}
