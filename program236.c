#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char arr[10]="GANESH";
    char *ptr=NULL;

    ptr=&(arr[0]);


    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;

    return EXIT_SUCCESS;
}