#include <stdio.h>

int main(void)
{
    int x,happy=0;
    scanf("%d",&x);

    happy=(x/500)*1000;
    x-=(x/500)*500;
    happy+=(x/5)*5;
    printf("%d\n",happy);

    return 0;
}