interface MyCamera {
    void takesnap();

    void recordvideo();

    private void greet() {
        System.out.println(" Good Morning ");
    }

    default void record4K() {
        greet();
        System.out.println(" Recording 4K videos... ");
    }
}

interface MyWifi {
    void getnetworks();

    void connectToNetwork(String network);
}

class Smartphone implements MyCamera, MyWifi {
    public void takesnap() {
        System.out.println(" Taking snap... ");
    }

    public void recordvideo() {
        System.out.println(" Taking video... ");
    }

    public void getnetworks() {
        System.out.println(" Getting List of Networks... ");
    }

    public void connectToNetwork(String network) {
        System.out.println(" Connecting to " + network);
    }
}

public class Polymorphism {
    public static void main(String[] args) {
        MyCamera cam = new Smartphone();
        cam.record4K();
        cam.recordvideo();
        // cam.getnetworks(); --->> throws an error because its not part of "MyCamera"
        // interface
    }
}
