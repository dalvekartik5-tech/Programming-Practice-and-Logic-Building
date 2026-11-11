#include<stdio.h>
#include<stdlib.h>

int iCountSpace(char *str)
{
    int iCountX=0;

    while( *str !='\0')
    {   if(*str==' ')
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

    iRet=iCountSpace(arr);
    printf("Number of Space: %d\n",iRet);

    return EXIT_SUCCESS;
}