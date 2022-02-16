public class multidimensional {
    public static void main(String[] args) {
        // int [] marks; // 1-D array
        int[][] marks; // 2-D array

        marks = new int [2][3];
        marks[0][0] = 101;
        marks[0][1] = 102;
        marks[0][2] = 103;
        marks[1][0] = 201;
        marks[1][1] = 202;
        marks[1][2] = 203;

        System.out.println("Printing using 2-D for loop");
        for (int i = 0; i < marks.length; i++) {
            for (int j = 0; j < marks[i].length; j++) {
                System.out.println(marks[i][j]);
                // System.out.print(" ");
            }
            // System.out.println("");
        }
    }
}
