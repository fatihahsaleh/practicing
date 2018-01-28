
import java.util.*;
public class Kira {
    public static void main(String[] args) {
       
        
        
        int a;
        int b;
        int c;
      String jawapan;
        
        
        Scanner input=new Scanner(System.in);
        
        System.out.println("Masukkan nombor anda ");
       
        
        do{
          b=input.nextInt(); 
          for(a=1; a<13; a++){
          c=a*b;
          System.out.print(c);
                  System.out.println(a+"x"+b+"="+c);

          }
          
          System.out.print("Adakah anda ingin meneruskan ");
           System.out.println();
          jawapan=input.nextLine();
        }
        while(jawapan=="YA");
        
          
        
       
        
       
       
        
   
        
      
      
    
        
        
        
       
        
        
    }
    
}
