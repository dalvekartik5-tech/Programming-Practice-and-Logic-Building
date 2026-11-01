/*
    Step1:Understand the problem statement
    Step2:Write the algorithm
    Step3:Decide the Language
    Step4:Write a program
    Step5:Test the progam
*/
///////////////////////////////////////////////////////////////////
//
// Step1:Understand the problem statement
//       User is going to enter any 2 interger
//       and we have to perform addition
//       
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
// Step2:Write the algorithm
/*  
    START
            Accept first number as no1
            Accept second number as no2
            create the variable as ans to store the result
            perform the addition and store into ans
            Display the result from ANS
    END

*/ 
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//  Step3:Decide the Language
//       We select C programming
//       
///////////////////////////////////////////////////////////////////
 
///////////////////////////////////////////////////////////////////
//
// Step4:Write a program
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>
int main()
{
  
   int iValue1, iValue2, iResult;

   printf("Enter your first number : ");
   scanf("%d",&iValue1);

   printf("Enter your second number : ");
   scanf("%d",&iValue2);


 iResult=iValue1+iValue2;//business logic

 printf(" %d",iResult);


    return 0;
}