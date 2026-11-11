#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCountX=0;

    while( *str !='\0')
    {   if((*str>='A') && (*str<='Z'))
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

    iRet=CountCapital(arr);
    printf("Number of capital letter: %d\n",iRet);

    return EXIT_SUCCESS;
}  