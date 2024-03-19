#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    a = a-b; ///amount of free space in Bottle 1
    c = c-a; ///
    printf("%d\n",c);

    return 0;
}

