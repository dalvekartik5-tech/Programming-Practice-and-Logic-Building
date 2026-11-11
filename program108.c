#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime (int ino)
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
        return true;
    }
    else 
    {
        return false;
    }
    
}

int main(void)
{
      
    int iValue=0;
    bool bRet=false;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet==true)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("not prime");
    }
    

    return EXIT_SUCCESS;
}