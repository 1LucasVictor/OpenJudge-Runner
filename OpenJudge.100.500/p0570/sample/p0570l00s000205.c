#include<stdio.h>

int main(void)
{
    int A,B;
scanf("%d %d",&A,&B);

if((A+B)%2==0)
{
    printf("%d",(A+B)/2);
}
else
{
    printf("IMPOSSIBLE");
}


    return 0;
}