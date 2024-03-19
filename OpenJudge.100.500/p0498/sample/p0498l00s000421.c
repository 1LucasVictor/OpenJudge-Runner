#include<stdio.h>
int main()
{
    int a,d;
    scanf("%d",&a);
    d=a/2;
    if(a%2!=0)
    {
        d++;
        printf("%d",d);
    }
    else
    printf("%d",d);
}
