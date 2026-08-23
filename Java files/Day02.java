class Employee {
    int id;
    String name;

    public void printDetails() {
        System.out.println("My id is " + id);
        System.out.println("and My name is "+ name);
    }
}


public class Day02 {
public static void  main(String[] args) {
        System.out.println("This is our custoom class");
        Employee a = new Employee();
        Employee b = new Employee();
        a.id = 51;
        a.name = "trump";
        a.id = 51;
        a.name = "trump";
        // System.out.println(a.id);
        // System.out.println(a.name);
        a.printDetails();
     }
}
