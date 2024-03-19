#include<stdio.h>
int main()
{
    int a, b, k=0, div=0;
    scanf("%d%d",&a,&b);
    if(a==0 || b==0)
        printf("impossible");
    else if(a>b)
    {
        div = (a-b)/2;
        k = (a-div);
        printf("%d",k);
    }
    else
    {
        div = (b-a)/2;
        k = (b-div);
        printf("%d",k);
    }
}