class thread1 implements Runnable {
    public void run() {
        System.out.println("i am a thread 1 ");
        System.out.println("i am a thread 1 ");
        System.out.println("i am a thread 1 ");
        System.out.println("i am a thread 1 ");
        System.out.println("i am a thread 1 ");
        System.out.println("i am a thread 1 ");
    }
}

class thread2 implements Runnable {
    public void run() {
        System.out.println("i am a thread 2 ");
        System.out.println("i am a thread 2 ");
        System.out.println("i am a thread 2 ");
        System.out.println("i am a thread 2 ");
        System.out.println("i am a thread 2 ");
    }
}

public class Threads_runnable {
    public static void main(String[] args) {
        thread2 bullet1 = new thread2();
        Thread gun1 = new Thread(bullet1);
        thread1 bullet2 = new thread1();
        Thread gun2 = new Thread(bullet2);

        gun1.start();
        gun2.start();
    }
}
