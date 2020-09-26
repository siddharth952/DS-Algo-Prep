import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    
    /*
        101001 X
        101010 O
        
        There are 2^n possibilities out of which we need to count Binary Strings which satisfies our condition
            0 1 2 3 4
            _________
    Zero    0 1 1 2 3               Last is 0 so we cannot add 0 again so we only add last 1's row.
    One     0 1 2 3 5               Last is 1 so we can add 1 || 0 so we add both the last columns's rows
    
    
    Initial: 0
             1
    */ 
    
    int oldZero = 1,oldOne = 1;
    for(int i = 2 ; i<=n;i++){
        int newZero = oldOne;
        int newOne = oldOne + oldZero;
        
        oldZero = newZero; oldOne = newOne;
        // We get to last and use value at old
    }
    System.out.println( oldZero + oldOne);
    
 }

}