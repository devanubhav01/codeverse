class Circle {
    float radius;

    public float area() {
        return 3.14f*(radius)*radius;
    }
    public float perimeter() {
        return 2*3.14f * radius;
    }
}


 public class Q06 {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.radius = 5;
        System.out.println(c.area());
        System.out.println(c.perimeter());
    }
}
