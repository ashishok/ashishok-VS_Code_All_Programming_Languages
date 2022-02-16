import java.util.ArrayList;

public class multi_D_array_list {
    public static void main(String[] args) {

        ArrayList<ArrayList<String>> d = new ArrayList<>(); 


        ArrayList<String> a = new ArrayList<String>();   //   or   ArrayList<String> a = new ArrayList();
        a.add("1");
        a.add("2");
        a.add("3");
        ArrayList<String> b = new ArrayList<String>();
        b.add("x");
        b.add("y");
        b.add("z");
        ArrayList<String> c = new ArrayList<String>();  
        c.add("hi");
        c.add("no");

        d.add(a);
        d.add(b);
        d.add(c);
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(d.get(2).get(1));
    }
    
}
