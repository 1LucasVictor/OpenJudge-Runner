#include<stdio.h>
int main()
{
    int a;
    float b;
    long long int d;
    scanf("%d",&a);
    scanf("%f.2",&b);
    d=(int)a*b;
    printf("%d",d);
    return 0;
}