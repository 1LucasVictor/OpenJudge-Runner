#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int k,a,b;

    scanf("%d",&k);
    scanf("%d %d",&a,&b);

    if(k<=b-a+1) printf("OK");
    else printf("NG");

    return 0;
}