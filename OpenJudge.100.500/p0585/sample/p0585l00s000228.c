#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a,b,t,num;
    scanf("%d%d%d",&a,&b,&t);
    num=t/a*b;
    printf("%d",num);
    return 0;
}