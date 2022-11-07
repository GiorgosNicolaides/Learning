import java.io.File;
import java.io.FileWriter;
import java.util.Scanner;

public class Main {

    /**
     * @param args
     */
    public static void main(String[] args) {

        try {
            File f = new File("/home/giorgos/Documents/Learning/Java/File/Practice-module/text.doc");
            FileWriter fw = new FileWriter(f);

            Scanner in = new Scanner(System.in);
            System.out.println("Give me some text");
            String st = in.nextLine();

            while (!st.isEmpty()) {
                fw.write(st.toUpperCase());
                fw.write("\n");
                st = in.nextLine();
            }

            fw.close();

        } catch (Exception e) {
            e.printStackTrace();
        }

    }
}
