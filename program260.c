//# $ &  *
#include<stdio.h>
#include<stdlib.h>
int CountSpeacialX(char *str)
{
    int iCountX=0;

    while( *str !='\0')
    {   if((*str=='#') || (*str=='*')||(*str=='$')||(*str=='%')||(*str=='&'))
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

    iRet=CountSpeacialX(arr);
    printf("Number of SpeacialCharacters : %d\n",iRet);

    return EXIT_SUCCESS;
}  