#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
   long long  int c=a+b;
    if(c%2==0)
    printf("%lld\n",c/2);
    else
    printf("IMPOSSIBLE\n");
    return 0;
}