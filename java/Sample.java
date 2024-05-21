class Pyramid {
    synchronized void draw_pyramid(char c) {
        for (int i = 0; i < 10; i += 2) {
            for (int k = 10 - i; k > 0; k -= 2) {
                System.out.print(" "); // Use print instead of println to avoid extra new lines
            }
            for (int j = 0; j <= i; j++) {
                System.out.print(c); // Use print instead of println to avoid extra new lines
            }
            System.out.println(); // Add new line after each row
        }
    }
}

class A extends Thread {
    Pyramid p;

    A(Pyramid p) {
        this.p = p;
    }

    public void run() {
        p.draw_pyramid('*');
    }
}

class B extends Thread {
    Pyramid p;

    B(Pyramid p) {
        this.p = p;
    }

    public void run() {
        p.draw_pyramid('#');
    }
}

class Sample {
    public static void main(String args[]) {
        Pyramid obj = new Pyramid();
        A th1 = new A(obj); // Create instance of A
        B th2 = new B(obj); // Create instance of B
        th1.start(); // Start thread th1
        th2.start(); // Start thread th2
    }
}
