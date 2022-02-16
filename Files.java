import java.io.File;
// import java.io.FileNotFoundException;
// import java.io.FileWriter;
// import java.io.IOException;
// import java.util.Scanner;

public class Files {
    public static void main(String[] args) {


        
        // code to create file


        // File myfile = new File("Ashish.txt");
        // try
        // {
        // myfile.createNewFile();
        // }
        // catch(IOException e)
        // {
        // System.out.println("unable to create this file ");
        // e.printStackTrace();






        // code to write in a file
        // try {
        //     FileWriter filewriter = new FileWriter("Ashish.txt");
        //     filewriter.write("This is our first file from this java course \n hello ");
        //     filewriter.close();
        // } catch (IOException e) {
        //     e.printStackTrace();
        // }





        // code to read a file 

        // File myfile = new File("Ashish.txt");
        // try {
        //     Scanner sc = new Scanner(myfile);
        //     while(sc.hasNextLine())
        //     {
        //         String line  = sc. nextLine();
        //         System.out.println(line);
        //     }
        //     sc.close();
             
        // } catch (FileNotFoundException e) {
        //     e.printStackTrace();
        // }





        //  delete a file

        File myfile = new File("Ashish.txt");
        if(myfile.delete())
        {
            System.out.println("I have deleted my " + myfile.getName());
        }
        else 
        {
             System.out.println(" some error occured while deleting the file ");
        }

    }
}
