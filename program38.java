//approach 3
import java.util.Scanner;

class airthmatic
{   
    public int  Addition(int ino1,int ino2)//error for not using static
 {
            int ians=0;
            ians=ino1+ino2;
            return ians;
 }
}
class program38
{
    public static void main(String A[])
{
    Scanner scanner=null;
    
    int iValue1=0,iValue2=0,iResult=0;
    scanner = new Scanner (System.in);

    System.out.println("Enter your first number : ");
    iValue1=scanner.nextInt();

    System.out.println("Enter your Second number : ");
    iValue2=scanner.nextInt();

    iResult=airthmatic.Addition(iValue1,iValue2);  
    System.out.println("Addition : "+iResult);

}
}