#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a-b>c)
        printf("0\n");
    else
    {
        printf("%d\n",c-(a-b));
    }
}
