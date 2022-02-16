class Employee {
    private int id;
    private String name;


    public Employee()
    {
        id = 222;
        name = "Alone Kumar";        
    }

    public Employee(String New_name, int New_no)
    {
        id = New_no;
        name = New_name;       
    }
    
    public Employee(String New_name)
    {
        id = 5;
        name = New_name;       
    }



    // public void setName(String n) {
    //     name = n; }

    public String getname() {
        return name;
    }

    // public void setid(int n) {
    //     id = n; }

    public int getid() {
        return id;
    }
}
public class constructor_overloading {
    public static void main(String[] args) {
        // Employee inp = new Employee("Ashish",42);     
        Employee inp = new Employee("Ashish_kumar");     
        // Employee inp = new Employee();              
         
        
        // inp.setName("Alone");
        // inp.setid(22);        
        System.out.println(inp.getname());
        System.out.println(inp.getid());

    }
}
