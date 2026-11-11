import java.util.Scanner;
class Digit
{
    public void displaydigits(int ino)
    {
        
        int iDigit=0;

        while(ino!=0)
        {  
        
        iDigit=ino%10;
        ino=ino/10;
        System.out.println(iDigit);
        }
        
    }  
    }

public class program123
{
    public static void main(String A[])
     {
        
        Digit digit=new Digit();
        digit.displaydigits(ino:9752);

     }
}