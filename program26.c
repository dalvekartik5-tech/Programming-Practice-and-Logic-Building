#include<Stdio.h>
#include<stdlib.h>
int main()
{

    char sName[20];
    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);
    printf("welcome %s",sName);

    return EXIT_SUCCESS;
}