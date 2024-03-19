#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    int d=n*a;
    if(d<b)
        printf("%d\n",d);
        else if(d==b)
            printf("%d\n",d);
    else
        printf("%d\n",b);
    return 0;
}
