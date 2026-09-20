class A {
    public int a;

    public int groot() {
        return 10;
    }

    public void meth2() {
        System.out.println("I am method 2 of class A");
    }
}

class B extends A {
    @Override 
    public void meth2() {
        System.out.println("I am method 2 of class B");
    }
    public void math3() {
        System.out.println("I am method 3 of class B");
    }
}

public class J07 {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        a.meth2();
        b.meth2();
    }
}
