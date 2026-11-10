import  java.util.Scanner;
class program57

{
    public static void main(String A[])
    {
        Scanner scanner=new Scanner(System.in);
        int iValue=0;   
        System.out.println("Enter the frequency : ");
        iValue=scanner.nextInt();


        Iteration iteration= new Iteration(); 
        
       iteration.display(iValue);
    }
}

class Iteration
{
     public void display(int ino)
     {
      int icnt=0; 

        for(icnt=1;icnt<=ino;icnt++)
        {
            System.out.println("Jay Ganesh.");
        }
    }
}