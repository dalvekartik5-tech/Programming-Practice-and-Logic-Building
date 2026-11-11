/*
    irow=4
    icol=4
    A A A A
    B B B B
    C C C C
    D D D D
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow,int icoll)
{
    int i=0,j=0;
    char ch='\0';
    for(i=1,ch='A';i<=irow;i++,ch++)
    
    {
       

        for(j=1;j<=icoll;j++)
        {
             
            
            {
                printf("%c\t",ch);
               
            }
          
        }
        printf("\n\n");
    }   
}

int main()
{

    int iValue1=0,iValue2=0;

    printf("Enter your row: ");
    scanf("%d",&iValue1);

    printf("Enter your column : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}