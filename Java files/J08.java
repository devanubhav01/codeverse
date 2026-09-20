class Phone {
    public void showTime() {
        System.out.println("Time is 8 am");
    }

    public void on() {
        System.out.println("Turning on Phone....");
    }
}

class Smartphone extends Phone {
    public void music() {
        System.out.println("Playing music....");    
    }
    
    public void on() {
        System.out.println("Turning on Smartphone....");
    }
}

public class J08 {
    public static void main(String[] args) {
        // Phone obj1 = new Phone();
        // Smartphone obj2 = new Smartphone();

        Phone obj1 = new Smartphone();
      //  obj1.showTime();
        obj1.on();
       // obj1.music();
    }
}
 