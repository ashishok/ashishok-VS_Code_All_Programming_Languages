public class Methods_objects {
    int logic(int x, int y)
    {
        int z ;
        if(x>y)
        {
            z = x+y;
        }
        else 
        {
            z = (x+y)*5;
        }
        return z;
    }
    public static void main(String[] args) {
        int a = 5;
        int b = 7, c;
        Methods_objects obj = new Methods_objects();         //object cretion
        c = obj.logic(a,b);
        
        int a1 = 2;
        int b1= 1;
        int c1;
        
        c1 = obj.logic(a1,b1);

        System.out.println(c);
        System.out.println(c1);
    }
}
