/////////////////////////////////////
//  
//Entry point of the application
//
////////////////////////////////////

#include "header.h"

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

   iResult=addition(iValue1,iValue2);

   printf("Addition : %d",iResult);

    return EXIT_SUCCESS;
}   
