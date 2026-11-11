#include<stdio.h>
#include<stdlib.h>

int iCountVowels(char *str)
{
    int iCountX=0;

    while( *str !='\0')
    {   if((*str == 'a')||(*str=='e')||(*str == 'i') || (*str=='o')||(*str == 'u'))
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

    iRet=iCountVowels(arr);
    printf("Number of vovels : %d\n",iRet);


    return EXIT_SUCCESS;
}