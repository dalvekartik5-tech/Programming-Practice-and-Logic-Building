#include<stdio.h>
#include<stdlib.h>
int minimum(int no1,int no2)
{
    if(no1<no2)
    {
        return no1;
    }
    else{
        return no2;
    }

}
int main()
{

    int iValue1=0,iValue2=0,iResult=0;
    printf("Enter your first number : ");
    scanf("%d",&iValue1);

    printf("Enter your second number : ");
    scanf("%d",&iValue2);

    iResult=minimum(iValue1,iValue2);//call by function

    printf("minimum : %d\n",iResult);

   
    return EXIT_SUCCESS;
}