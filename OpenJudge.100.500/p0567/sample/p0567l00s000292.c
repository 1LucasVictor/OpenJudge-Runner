#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=b+c;
    if(a<d)
    {
        printf("%d",d-a);
    }
    else
    {
        printf("0");
    }
}
