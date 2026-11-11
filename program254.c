#include<stdio.h>
#include<stdlib.h>

int CountX(char *str)
{
    int iCountX=0;

    while( *str !='\0')
    {   if((*str>=97) && (*str<=100))
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

    iRet=CountX(arr);
    printf("Number of small letter: %d\n",iRet);

    return EXIT_SUCCESS;
}  