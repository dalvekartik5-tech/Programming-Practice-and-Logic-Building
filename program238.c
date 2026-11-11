#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char arr[20]="JAY GANESH";
    char *ptr=NULL;
    int iCount=0;

    ptr=&(arr[0]);

    while(*ptr != '\0')
    {
       
        iCount++;
        ptr++;
    }
    printf("Length os string is : %d\n",iCount);
    
    return EXIT_SUCCESS;
}