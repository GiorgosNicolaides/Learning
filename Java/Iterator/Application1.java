import java.util.*;
import java.lang.*;
public class Application1 {
    
    /**
     * @param args
     */
    public static void main(String[] args) {
        ArrayList <String>  l = new ArrayList<String>();
        l.add("Hello");
        l.add("World");
        l.add("I");
        l.add("am");
        l.add("Giorgos");
        Iterator <String> here =  l.iterator() ;

        while(here.hasNext()){
            System.out.println(here.next());
            here.remove();
        }

    }
        
    
}
