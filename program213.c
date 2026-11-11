/*
    irow=4
    icol=4
    1   1     1   1
    2   2     2   2
    3   3     3   3
    4   4     4   4
    

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow,int icoll)
{
    int i=0,j=0;

    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icoll;j++)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    }   
}

int main()
{

    int iValue1=0,iValue2=0;

    printf("Enter your row: ");
    scanf("%d",&iValue1);

    printf("Enter your column : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}