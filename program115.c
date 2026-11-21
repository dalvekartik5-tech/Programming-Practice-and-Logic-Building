#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime (int ino)
{
    int iCnt=0;
   bool bFlag=true;

    for ( iCnt = 2 , bFlag=true ; iCnt <= ino/2 ; iCnt++ )
    {
        if((ino % iCnt) == 0)
        {
            bFlag=false;
            break;
        }
    }
    if(iCnt == (ino/2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }

    return bFlag;
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