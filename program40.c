#include<stdio.h>
#include<stdlib.h>
int main()
{

    int iValue1=0,iValue2=0,iResult=0;
    printf("Enter your first number : ");
    scanf("%d",&iValue1);

    printf("Enter your second number : ");
    scanf("%d",&iValue2);

    if(iValue1>iValue2)
    {
        printf("%d is greater",iValue1);
    }
    else{
        printf("%d is greater",iValue2);
    }
    return EXIT_SUCCESS;
}