import java.util.Scanner;

class Digit
{
    public void displaydigits()
    {
        int ino=175920;

        System.out.println("Number is : "+ino);//175920 
        
        System.out.println(ino % 10);//2
        ino=ino/10;//17590
        System.out.println("Number is : "+ino);//1759
        
        System.out.println(ino % 10);//0
        ino=ino/10;//1759
        System.out.println("Number is : "+ino);//175

        System.out.println(ino % 10); //9
        ino=ino/10;//175
        System.out.println("Number is : "+ino);//17

        System.out.println(ino % 10);//5
        ino=ino/10;//17
        System.out.println("Number is : "+ino);//17     

        System.out.println(ino % 10);//7
        ino=ino/10;//1
        System.out.println("Number is : "+ino);//0   

        System.out.println(ino % 10);//1
        ino=ino/10;//0
        System.out.println("Number is : "+ino);//0   

    }  
    }



public class program120
{
    public static void main(String A[])
     {
        
        Digit digit=new Digit();
        digit.displaydigits();

     }
}