class Circle {
    float radius;

    public float area() {
        return 3.14 * radius * radius;
    }
    public float perimeter() {
        return 2*3.14 * radius;
    }
}


 class Q06 {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.radius = 5;
        System.out.println();
    }
}
