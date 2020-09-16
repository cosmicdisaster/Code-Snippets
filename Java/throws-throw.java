
import java.lang.Math;
class MyCalculator {
    /*
    * Create the method long power(int, int) here.
    */
    public static int power(int n,int p) throws Exception{
        if(n==0&&p==0) throw new Exception("n and p should not be zero.");
        if(n<0||p<0) throw new Exception("n or p should not be negative.");
        return (int)Math.pow(n,p);

        
    }
}
//This type of handling will be useful to check variables, when error checking needs if-else statements.
