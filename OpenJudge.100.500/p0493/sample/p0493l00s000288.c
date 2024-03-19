#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    int a=x/500;
    int b=x-a*500;
    int c=b/5*5;
    printf("%d\n",1000*a+c);
    return 0;
}
