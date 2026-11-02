#include<stdio.h>
#include<stdlib.h>

void CheckEven(
                    int ino //fucntion
              )           
{
     if(ino %2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd");
    }
}
int  main()
{

    int iValue=0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    CheckEven(iValue);//function call
   
    return EXIT_SUCCESS;
}
