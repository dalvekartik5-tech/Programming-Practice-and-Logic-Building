#include<stdio.h>
#include<stdlib.h>
int max(int ino1,int ino2)
{
    
    if(ino1>ino2)
    {
        return ino1;
    }
    else
    {
        return ino2;
    }
    
}

int main()
{

    int iValue1=0,iValue2=0,iResult=0;
    printf("Enter your first number : ");
    scanf("%d",&iValue1);

    printf("Enter your second number : ");
    scanf("%d",&iValue2);

    iResult=max(iValue1,iValue2);//call by function

    printf("maximum : %d\n",iResult);

   
    return EXIT_SUCCESS;
}