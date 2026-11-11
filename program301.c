#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no1=0xAD56;
    int no2=0xfd77;
    int ans=0;
    ans=no1|no2;
    printf("%d\n",ans);
    return EXIT_SUCCESS;
}