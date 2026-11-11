#include<stdio.h>
#include<stdlib.h>

int CountDigit(char *str)
{
    int iCountX=0;

    while( *str !='\0')
    {   if((*str>='0') && (*str<='9'))
        { 
            iCountX++;  
        }

        *str++;

    }
    return iCountX;
}
int main()
{   
    char arr[100]={'\0'};
    int iRet=0;
    
    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet=CountDigit(arr);
    printf("Number of digit : %d\n",iRet);

    return EXIT_SUCCESS;
}  