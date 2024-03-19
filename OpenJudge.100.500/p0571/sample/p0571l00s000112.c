#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c>a*b)
        printf("%d\n",a*b);
    else if(c<a*b || c==a*b)
        printf("%d\n",c);

    return 0;
}
