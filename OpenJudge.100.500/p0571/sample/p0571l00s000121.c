#include<stdio.h>
#define MIN(a,b) a<b?a:b
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    printf("%d\n",MIN((n*a),b));
    return 0;
}