class Employee {
    private int id;
    private String name;

    public void setName(String n) {
        name = n; // ---> OR              this.name = n;
    }

    public String getname() {
        return name;
    }

    public void setid(int n) {
        id = n; // ---> OR                this.id = n;
    }

    public int getid() {
        return id;
    }
}

public class Access_modifiers {
    public static void main(String[] args) {
        Employee inp = new Employee();
        // inp.id =22;
        // inp.name = "Alone"; ---> Throws an error due to private access modifier

        inp.setName("Alone");
        inp.setid(22);
        System.out.println(inp.getname());
        System.out.println(inp.getid());
    }

}
