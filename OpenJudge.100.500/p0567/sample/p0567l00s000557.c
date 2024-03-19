#include<stdio.h>
int main()
{
    int A,B,C,p,r;
    scanf("%d%d%d",&A,&B,&C);

    p=A-B;
    r=C-p;
    if(p<C)
    {
    printf("%d",r);
    }
    else
    {
       printf("0");
    }
    return 0;
}
