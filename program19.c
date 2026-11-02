#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(
                    int ino //fucntion
              )           
{
     if(ino %2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int  main()
{

    int iValue=0;
    bool bRet = false;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet==true)
    {
        printf("it is even");
    }
    else
   {
    printf("odd");
   }
    return EXIT_SUCCESS;
}
