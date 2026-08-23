class Employee{
    int salary;

    public int getSalary() {
        return salary;
    }

    String name;

    public String getName() {
        return name;
    }

    public void setName(String z) {
        name = z;
    }
}

public class Q01 {
   public static void main(String[] args) {
       Employee a = new Employee();
       a.setName("kim");
       a.salary = 50000;
       System.out.println(a.getSalary());
       System.out.println(a.getName());
   }
}
