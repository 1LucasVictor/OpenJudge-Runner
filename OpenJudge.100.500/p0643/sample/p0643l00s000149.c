#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=a*b;
    if(x%2==1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}
