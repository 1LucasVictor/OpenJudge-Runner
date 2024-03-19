#include<stdio.h>
int main()
{
    int A,B,c,d,e;
    scanf("%d%d",&A,&B);
    -1000<=A<=1000;
    -1000<=B<=1000;
    c=(A+B);
    d=(A-B);
    e=(A*B);
    if ((c>d)&&(c>e))
    {
        printf("%d\n", c);
    }
    else if((d>c)&&(d>e))
    {
        printf("%d\n", d);
    }
    else if((e>c)&&(e>d))
    {
        printf("%d\n", e);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
