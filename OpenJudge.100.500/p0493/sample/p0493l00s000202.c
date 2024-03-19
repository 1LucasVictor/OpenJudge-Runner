#include<stdio.h>
int main()

{
    int X,a,b,c;

    scanf("%d",&X);

    a=X/500;
    b=X%500;
    c=b/5;

    printf("%d",1000*a+5*c);

    return 0;
}
