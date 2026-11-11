#include<stdio.h>
#include<stdlib.h>

void Display(char *str)
{
    while(*str != '\0')
    {
       printf("%c\n",*str);
        str++;
    }
}
int main()
{   
    char arr[100];
    printf("Enter your string : ");
    scanf("%[^'\n']s",arr);

    Display(arr);//display(100) -- call by address
    return EXIT_SUCCESS;
}