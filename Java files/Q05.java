class Gta {
    public void hit() {
        System.out.println("Hitting the enemy");
    }
    public void run() {
        System.out.println("Running from the enemy");
    }
    public void fire() {
        System.out.println("Firing on the enemy");
    }
}

public class Q05 {
    public static void main(String[] args) {
        Gta player1 = new Gta();
        player1.fire();
        player1.run();
        player1.hit();
    }
}
