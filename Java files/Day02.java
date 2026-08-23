class Employee {
    int id;
    int salary;
    String name;

    public void printDetails() {
        System.out.println("My id is " + id);
        System.out.println("and My name is "+ name);
    }
}


public class Day02 {
public static void  main(String[] args) {
        System.out.println("This is our custom class");
        Employee a = new Employee();
        Employee b = new Employee();
        a.id = 51;
        a.name = "trump";
        b.id = 100;
        b.name = "kim";
        // System.out.println(a.id);
        // System.out.println(a.name);
        a.printDetails();
        b.printDetails();
     }
}
