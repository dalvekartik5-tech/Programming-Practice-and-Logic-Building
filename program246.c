#include<stdio.h>
#include<stdlib.h>

int iCountx(char *str)
{
    
    int iCountX=0;

    while( *str !='\0')
    {   
        if(*str=='A')
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

    iRet=iCountx(arr);
    printf("Number of a  : %d\n",iRet);


    return EXIT_SUCCESS;
}