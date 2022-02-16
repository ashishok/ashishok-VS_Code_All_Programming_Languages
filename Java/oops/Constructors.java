class Employee {
     int id;
     String name;


    // public Employee()
    // {
    //     id = 222;
    //     name = "Alone Kumar";       // constructor__2
    // }

    public Employee(String New_name, int New_no)          // we can or cannot add public here
    {
        id = New_no;
        name = New_name;       // constructor__1
    }



    // public void setName(String n) {
    //     name = n; }

    // public String getname() {
    //     return name;
    // }

    // public void setid(int n) {
    //     id = n; }

    // public int getid() {
    //     return id;
    // }
}


public class Constructors {
    public static void main(String[] args) {
        Employee inp = new Employee("Ashish",42);     // ---->           for constructor__2
        // Employee inp = new Employee();   --->           for constructor__1
         
        // inp.setName("Alone");
        // inp.setid(22);        
        // System.out.println(inp.getname());
        // System.out.println(inp.getid());

        System.out.println(inp.id);
        System.out.println(inp.name);
    }
}
