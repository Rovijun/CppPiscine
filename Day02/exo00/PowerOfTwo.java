import java.io.*;

class Main {
    static boolean isPowerOfTwo(int n)
    {
        return (int)(Math.ceil((Math.log(n) / Math.log(2)))) == (int)(Math.floor(((Math.log(n) / Math.log(2)))));
    }
 
    public static void main(String[] args)
    {
        if (isPowerOfTwo(8))
            System.out.println("Yes");
        else
            System.out.println("No");
 
        if (isPowerOfTwo(7))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}