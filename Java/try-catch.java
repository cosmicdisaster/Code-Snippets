/*Java has built-in mechanism to handle exceptions. Using the try statement we can test a block of code for errors. The catch block contains the code that says what to do if exception occurs.
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int a,b,c;
        Scanner scan = new Scanner(System.in);
        try{//all the variables that are involved in the error handling must be initialized within the try block.
        a=scan.nextInt();
        b=scan.nextInt();
        c=a/b;
        System.out.println(c);
        }
        catch(InputMismatchException e){
            System.out.println("java.util.InputMismatchException");
        }
        catch(Exception e){//Can also use ArithmeticException e
            System.out.println(e);
        }
    }
}
