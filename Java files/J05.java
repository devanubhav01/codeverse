class Base {
    int x;

    public int getX() {
        return x;
    }

    public void setX(int x) {
        System.out.println("I am setting x now");
        this.x = x;
    }

    public void printMe(){
        System.out.println("I am a method");
    }
}

class Derived extends Base {
    int y;

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}

public class J05 {
    public static void main(String[] args) {
        Derived b = new Derived();
        b.setX(4);
        System.out.println(b.getX());
    }
}
