#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=a*b;
    if(x%2==0)
        printf("Even\n");
    else if(x%2==1)
        printf("Odd\n");
    return 0;
}
