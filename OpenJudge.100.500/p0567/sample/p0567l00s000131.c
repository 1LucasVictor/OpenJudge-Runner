#include<stdio.h>
#define min(a,b) a<b?a:b
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a-=b;
    b=min(a,c);
    printf("%d\n",c-b);
    return 0;
}
