#include<stdio.h>

int main(void)
{
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
    if(0<c-a+b)
        printf("%d",c-a+b);
    else
        printf("0");
}