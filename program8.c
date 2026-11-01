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
            Create the variable as ans to store the result
            Perform the addition and store into ans
            Display the result from ANS
    END

*/ 
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//  Step3:Decide the Language
//        We select C programming
//       
///////////////////////////////////////////////////////////////////
 
///////////////////////////////////////////////////////////////////
//
// Step4:Write a program
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////
//
//  functiona name : Addition
//  input          : integer,integer
//  output         : integer
//  description    : performs addition
//  date           : 04/10/2026
//  author         :kd
//
///////////////////////////////////////

int Addition(int ino1,int ino2)
{
    int ians=0;
    ians=ino1+ino2; //business logic
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

   printf("Enter your first number : ");
   scanf("%d",&iValue1);

   printf("Enter your second number : ");
   scanf("%d",&iValue2);

   iResult=Addition(iValue1,iValue2);

 printf(" Addition : %d",iResult);


    return 0;
}   

///////////////////////////////////
//Step5:Test the progam
//-----------------------------
// Tested test case :
//-------------------------------
//  input1     input 2   output
//   10          11       21
//    0          11       11
//  -20         -11      -31
//-------------------------------
///////////////////////////////////