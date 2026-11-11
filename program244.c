#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strlenX(char *str)
{
    int iCount=0;

    while( *str !='\0')
    {
        iCount++;
        *str++;
    }
      return iCount;
}
int main()
{   
    char arr[100]={'\0'};
    int iRet=0;
    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet=strlen(arr);

    printf("String length : %d\n",iRet);


    return EXIT_SUCCESS;
}