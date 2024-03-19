#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
     
    printf("%d",c + b > a ? c + b - a : 0);
    return 0;
}
