public class strings_methods {
    public static void main(String[] args) {
        
        //length
        String  name = "HeLlo";
        System.out.println(name);
        int value = name.length();
        System.out.println(value);

        //toLowerCase
        String lstring = name.toLowerCase();
        System.out.println(lstring);
        
        //toUpperrCase
        String Ustring = name.toUpperCase();
        System.out.println(Ustring);

        //trimming
        String nonTrimmingString = "         Hello         ";
        System.out.println(nonTrimmingString);
        String trims = nonTrimmingString.trim();
        System.out.println(trims);

        //substring
        String substr = name.substring(3);
        System.out.println(substr);
        System.out.println(name.substring(1,4));    // start index will be included but end index won't included

        //replace
        String rep = name.replace('L','o');    //replace L with o 
        String reps = name.replace("eLl","ii"); 
        System.out.println(rep);
        System.out.println(reps);

        //startWith
        System.out.println(name.startsWith("He"));
        System.out.println(name.endsWith("lo"));

        //charAT
        System.out.println(name.charAt(2));
        System.out.println(name.indexOf("e"));
        System.out.println(name.indexOf("l "));
        System.out.println(name.indexOf("l",2));   // start searching from index 2

        //lastIndex
        System.out.println(name.lastIndexOf("o"));      // search from last string
        System.out.println(name.lastIndexOf("o",4));    // seach from 4th string 

        //equals
        System.out.println(name.equals("HeLlo"));
        System.out.println(name.equalsIgnoreCase("hello"));    // ignores the  upper & loower cases.
    }
    
}
