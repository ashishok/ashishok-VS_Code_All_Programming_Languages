public class int_to_char {
    public static void main(String[] args) {
        char grade = 'B';
        grade = (char) (grade + 8); // we added char because char + integer always gives integer value
        System.out.println(grade);
    }

}
