#include<stdio.h>
#include<stdlib.h>

int  main()
{

    int iValue=0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    if(iValue %2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd");
    }
    
    return EXIT_SUCCESS;
}
