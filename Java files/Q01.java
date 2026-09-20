class Employee10{
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
       Employee10 a = new Employee10();
       a.setName("kim");
       a.salary = 50000;
       System.out.println(a.getSalary());
       System.out.println(a.getName());
   }
}
