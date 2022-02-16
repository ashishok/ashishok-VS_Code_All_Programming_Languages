class thread1 extends Thread {
    public void run() {
        int i = 0;
        while (i < 40) {
            System.out.println("My Thread 1 is running ");
            i++;
        }
    }
}

class thread2 extends Thread {
    public void run() {
        int i = 0;
        while (i < 40) {
            System.out.println("My Thread 2 is running ");
            i++;
        }
    }
}

public class Threads_extending {
    public static void main(String[] args) {
        thread1 t1 = new thread1();
        thread2 t2 = new thread2();
        t1.start();
        t2.start();
    }

}
