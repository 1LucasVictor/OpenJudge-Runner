#include<stdio.h>

int main()
{
    int a,b,k;
    scanf("%d%d",&a,&b);
    if((a+b)%2==0)
    {
        k=(a+b)/2;
        printf("%d\n",k);
    }
    else
        printf("IMPOSSIBLE\n");
}
