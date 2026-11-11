#include<stdio.h>
#include<stdlib.h>

void Display(char *str)
{
    printf("%s\n",  str);
}
int main()
{   
    char arr[]="Ganesh";


    Display(arr);//display(100) -- call by address
    return EXIT_SUCCESS;
}