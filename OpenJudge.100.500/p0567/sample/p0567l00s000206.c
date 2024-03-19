#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int count=C-(A-B);
    if(count>=0)
    {
    printf("%d",count);
    }
    else
    {
        printf("0");
    }

}