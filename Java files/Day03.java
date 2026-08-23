class MyEmployee {
   private int id;
   private String name;

   public void setName(String z) {
       name = z;
   }

   public String getName() {
       return name;
   }

   public void setId(int v) {
   
    id =v;
 }

   
  public int getId(){
      return id;
   }
}

public class Day03 {
    public static void main(String[] args) {
        MyEmployee a = new MyEmployee();
        // a.id=101;
        // a.name="tesla";
    
    a.setName("tesla");
    a.setId(1234);
    System.out.println(a.getName());
    System.out.println(a.getId());
}
    
}
