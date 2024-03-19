#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=a*b;
    printf("%s",x%2==0?"Even":"Odd");
    return 0;
}
