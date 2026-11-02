#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////
//
//  functiona name : Addition
//  input          : integer,integer
//  output         : integer
//  description    : performs addition
//  date           : 04/10/2026
//  author         : kd
//
///////////////////////////////////////

int Addition(
                int ino1,   //first input
                int ino2    //secpnd input
            )
{
    int ians=0;

    ians=ino1+ino2;         //business logic
    
    return ians;

}
/////////////////////////////////////
//  
//Entry point of the application
//
////////////////////////////////////
int main()
{
  
   int iValue1=0, iValue2=0, iResult=0;

   printf("Enter your first number : \n ");
   if(scanf("%d",&iValue1) !=1)
   {
            fprintf(stderr,"invalid input");
            
            return EXIT_FAILURE;
   }

   printf("Enter your second number : \n ");
    if(scanf("%d",&iValue2) !=1)
   {
           fprintf(stderr,"invalid input");

           return EXIT_FAILURE;
   }

   iResult=Addition(iValue1,iValue2);

   printf("Addition : %d",iResult);

    return EXIT_SUCCESS;
}   

///////////////////////////////////
//      Step5:Test the progam
//-------------------------------
//      Tested test case :
//-------------------------------
//      input1     input 2   output
//        10          11       21
//         0          11       11
//       -20         -11      -31
//-------------------------------
///////////////////////////////////