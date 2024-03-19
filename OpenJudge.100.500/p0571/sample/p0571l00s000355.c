#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(b<a*n)
        printf("%d\n",b);
    else
        printf("%d\n",a*n);
    return 0;
}
