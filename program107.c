#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int ino)
{
    int iCnt=0;
    int isum=0;

    for ( iCnt = 1 ; iCnt <= ino/2 ; iCnt++)
    {
        if((ino % iCnt) == 0)
        {
            isum=isum=iCnt;
        }
    }

    if(isum==1)
    {
    printf("It is a prime number");
    }
    else 
    {
        printf("It is not a prime number");
    }
    
}

int main(void)
{
      
    int iValue=0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    CheckPrime(iValue);
    

    return EXIT_SUCCESS;
}