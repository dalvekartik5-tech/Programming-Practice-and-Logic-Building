#include<Stdio.h>
#include<stdlib.h>
float average(int iValue1,int iValue2,int iValue3)
{

    float fans=0.0f;
    //typecasting
    fans=((float)iValue1+(float)iValue2+(float)iValue3)/3;
    return fans;

}
int main()
{
    int ino1=0,ino2=0,ino3=0;
    float fResult=0.0f;

    printf("Enter your first number : ");
    scanf("%d",&ino1);

     printf("Enter your second number : ");
    scanf("%d",&ino2);
    printf("Enter your thirdnumber : ");
    scanf("%d",&ino3);

    fResult=average(ino1,ino2,ino3);

    printf("average= %f",fResult);

        return EXIT_SUCCESS;
}