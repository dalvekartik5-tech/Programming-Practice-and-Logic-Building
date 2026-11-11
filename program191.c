/*
    Input : 6
    Output: -6  -5   -4   -3   -2   -1   0  1   2   3   4   5   6

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=-iNo ; iCnt<=iNo; iCnt++)//O(2N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

//Time complexity : O(2N)
int main()
{
    int iValue=0;
    printf("Enter your number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}