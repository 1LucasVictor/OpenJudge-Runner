#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a*b;
    if((1<=a && a<=9) && (1<=b && b<=9))
        printf("%d\n",c);
    else
        printf("-1\n");

    return 0;
}
