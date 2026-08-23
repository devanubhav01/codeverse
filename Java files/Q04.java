class Rectangle {
    int length;
    int breadth;

    public int area() {
        return length * breadth;
    }

    public int perimeter() {
        return 2*(length + breadth);
    }
}

public class Q04 {
    public static void main(String[] args) {
        Rectangle z = new Rectangle();
        z.length = 5;
        z.breadth = 4;
        System.out.println(z.area());
    }
}
