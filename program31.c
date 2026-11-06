#include<Stdio.h>
#include<stdlib.h>
int main()
{
    int iAge;
    float fMarks;
    char sName[20];
    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);       

    printf("Enter your age : \n");
    scanf("%d",&iAge);     //space added

    printf("Enter your marks : \n");
    scanf("%f",&fMarks);

    printf("welcome %s\n",sName);
    printf("Your age : %d\n",iAge);
    printf("Your marks :&f\n",fMarks);


    return EXIT_SUCCESS;
}