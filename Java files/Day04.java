class Emp {
    private int id;
    private String name;

    public Emp() {
        id = 198;
        name = "Rocket";
    }
    public Emp(String myName, int myId) {
        id = myId;
        name = myName;
    }
    public void setName(String z) {
        name = z;
    }

    public String getName() {
        return name;
    }

    public void setId(int v) {

        id = v;
    }

    public int getId() {
        return id;
    }
}



public class Day04 {
    public static void main(String[] args) {
        Emp g = new Emp("Snowbell",199);
        // g.setName("groot");
        // g.setId(112);
        System.out.println(g.getName());
        System.out.println(g.getId());
    }
}
