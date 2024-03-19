#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a/2;
    if(a%2==0)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",b+1);
    }
    return 0;
}
