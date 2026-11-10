#include<Stdio.h>
#include<stdlib.h>
float average(int iValue1,int iValue2)
{

    float fans=0.0f;
    fans=(iValue1+iValue2)/2;
    return fans;

}

int main()
{
    int ino1=0,ino2=0;
    float fResult=0.0f;

    printf("Enter your first number : ");
    scanf("%d",&ino1);

     printf("Enter your second number : ");
    scanf("%d",&ino2);

    fResult=average(ino1,ino2);

    printf("average= %f",fResult);


        return EXIT_SUCCESS;
}