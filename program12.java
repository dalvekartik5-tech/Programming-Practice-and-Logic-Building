import java.util.Scanner;
class Digit
{
    public int Countdigits(int ino)
    {
        
        int iDigit=0;
        int iCount=0;

        if(ino<0)
        {
            ino = -ino;
        }
        while(ino!=0)
        {  
        iDigit=ino%10;
        ino=ino/10;
        iCount++;
        }
        
        return iCount;
    }  
    }

public class program12
{
    public static void main(String A[])
     {
        Scanner scanner=new Scanner(System.in);
        int iRet=0;
        Digit digit=new Digit();

        System.out.println("Enter your number : ");
        int iValue=scanner.nextInt();
        iRet=digit.Countdigits(iValue);
        System.out.println("TOTAL DIGITS ARE :"+iRet);
     }
}