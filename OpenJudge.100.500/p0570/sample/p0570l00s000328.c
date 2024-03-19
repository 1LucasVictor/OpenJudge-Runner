#include<stdio.h>
int main()
{
    int a,b,k;
    scanf("%d%d",&a,&b);
    k=a+b;
    if(k%2==0)
        printf("%d\n",k/2);
    else
        printf("IMPOSSIBLE\n");
    return 0;
}