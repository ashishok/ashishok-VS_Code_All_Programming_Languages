class Employee {
    int id;
    String name;
    int salary;
    public void details ()
    {
        System.out.println("my id is "+ id );
        System.out.println("my name is "+name);
    }
    public int getsalary()
    {
        return salary;
    }
}

public class class_ {

    public static void main(String[] args) {
        System.out.println("This is our custom class ");
        Employee Ashish = new Employee();   // instantiating a new Employee object
        Employee john = new Employee();   // instantiating a new Employee object
        
        // setting attributes & properties
        Ashish.id = 12;
        Ashish.name = "Alone";
        Ashish.salary = 100;
        john.id = 13;
        john.name = "jony";
        john.salary = 150;
        
        //printing attributes
          Ashish.details();

        // john.details();
        // System.out.println(Ashish.id);
        // System.out.println(Ashish.name);

        int salary = john.getsalary();
        System.out.println(salary);
    }
}
