#include<stdio.h>

int wt(int b);
int main()
{
    int n,a;
    scanf("%d %d",&n,&a);
    printf("%d",wt(n)*a);
}

int wt(int b)
{
    int c=1,i;
    for(i=0;i<b;i++)
    {
        c*=100;
    }
    return c;
}