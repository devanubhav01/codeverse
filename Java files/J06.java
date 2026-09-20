class Base1 {
    Base1() {
        System.out.println("I am a constructor");
    }
    Base1(int x) {
        System.out.println("I am an overloaded constructor "+x);
    } 
}

class Derived1 extends Base1 {
    Derived1() {
        System.out.println("I am a derived class constructor");
    }
    Derived1(int x, int y) {
        super(x);
        System.out.println("I am an overloaded constructor of derived1 with value " + y);
    }
}

class childofderived extends Derived1 {
    childofderived() {
        System.out.println("I am a child of derived constructor");
    }
    childofderived(int x,int y,int z) {
        super(x,y);
        System.out.println("I am an overloaded constructor of childofderived with value " + z);
    }
}

public class J06 {
    public static void main(String[] args) {
       // Base1 b1 = new Base1();
     //   Derived1 d1 = new Derived1();
    // Derived1 d1 = new Derived1(15, 20);
     // childofderived cod = new childofderived(25,30,35);
    }
}
