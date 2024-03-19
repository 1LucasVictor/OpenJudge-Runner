#include<stdio.h>
int main(void)
{
    int x,y,z;
    scanf("%d",&x);
    y = x%500;
    z = y/5;
    printf("%d",(x/500)*1000 + z*5);
    return 0;
}