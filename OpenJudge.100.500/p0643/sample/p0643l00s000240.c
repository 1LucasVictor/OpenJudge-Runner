#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    i=a*b;
    if(i%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
