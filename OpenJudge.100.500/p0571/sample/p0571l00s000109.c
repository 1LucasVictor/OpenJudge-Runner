#include <stdio.h>
int main()
{
    int a,b,x,c;
    scanf("%d %d %d",&a,&b,&c);
    x=a*b;
    if(x>c) printf("%d\n",c);
    else if(x<c) printf("%d\n",x);
    return 0;
}
