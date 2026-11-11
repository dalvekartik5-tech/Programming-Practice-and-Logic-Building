#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Entered string is : %s\n",arr);
    
    return EXIT_SUCCESS;
}