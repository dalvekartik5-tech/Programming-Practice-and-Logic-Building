#include<stdio.h>
#include<stdlib.h>
void max(int ino1,int ino2)
{
    
    if(ino1>ino2)
    {
        printf("%d is greater",ino1);
    }
    else{
        printf("%d is greater",ino2);
    }
    
}

int main()
{

    int iValue1=0,iValue2=0,iResult=0;
    printf("Enter your first number : ");
    scanf("%d",&iValue1);

    printf("Enter your second number : ");
    scanf("%d",&iValue2);

    max(iValue1,iValue2);//call by function

   
    return EXIT_SUCCESS;
}