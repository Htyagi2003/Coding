class A {
    int x = 10;

    int sum(int a, int b) {
        return a + b;
    }

    public static void main(String args[]) {
        A obj = new A();
        B obj1 = new B(); // single level inheritence
        C obj2 = new C(); // multilevel inheritence
        D obj3 = new D(); // Hierarchical inheritence
        int s = obj1.sum(3, 4);
        int s1 = obj2.sum(9, 8);
        int s2 = obj3.sum(10, 8);
        System.out.println(s);
        System.out.println(s1);
        System.out.println(s2);
        int multi = obj2.multi(s, s1);
        int multi1 = obj3.multi(s1, s2);
        System.out.println(multi);
        System.out.println(multi1);
    }

}

class B extends A { // single level
    int x = 20;

    int multi(int a, int b) {
        return a * b;
    }

}

class C extends B {// multilevel
    int x = 30;

}

class D extends B { // Hierarchical
    int x = 40;
}
