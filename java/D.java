class A extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("this is thread A " + i);
        }
    }
}

class B extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("this is thread B " + i);
        }
    }
}

class C extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("this is thread C " + i);
        }
    }
}

class D {
    public static void main(String[] args) {
        System.out.println("thsi is main thread");
        new A().start();

        new B().start();

        new C().start();

        System.out.println("this the end of main thread");
    }
}
