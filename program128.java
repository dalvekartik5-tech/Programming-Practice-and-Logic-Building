import java.util.Scanner;
class Digit
{
    public int SumDigits(int ino)
    {
        
        int iDigit=0;
        int iSum=0;

        if(ino<0)
        {
            ino = -ino;
        }
        while(ino!=0)
        {  
        iDigit=ino%10;
        iSum=iSum+iDigit;
        ino=ino/10;
        
        }
        return  iSum;
    }  
    }

public class program128
{
    public static void main(String A[])
     {
        Scanner scanner=new Scanner(System.in);
        int iRet=0;
        Digit digit=new Digit();

        System.out.println("Enter your number : ");
        int iValue=scanner.nextInt();
        iRet=digit.SumDigits(iValue);
        System.out.println("sum  :"+iRet);
     }
}