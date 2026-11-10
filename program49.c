#include<Stdio.h>
#include<stdlib.h>
int minimum(int ino1,int ino2,int ino3)
{

    int ians=0;
    if((ino1 < ino2) && (ino1 < ino3))
    {
        return ino1;
    }
    else if ((ino2 < ino1) && (ino2 < ino3))
    {

        return ino2;
    }
    else{
        return ino3;
    }
    
   
    return ians;

}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iresult=0;
   

    printf("Enter your first number : ");
    scanf("%d",&iValue1);

     printf("Enter your second number : ");
    scanf("%d",&iValue2);

    printf("Enter your thirdnumber : ");
    scanf("%d",&iValue3);

    iresult=minimum(iValue1,iValue2,iValue3);
    printf("Mainimum number is: %d",iresult);


        return EXIT_SUCCESS;
}