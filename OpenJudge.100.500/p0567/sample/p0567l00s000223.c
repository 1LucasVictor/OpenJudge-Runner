#include <stdio.h>
int main()
{
    int a,b,c,d;

    scanf("%d%d%d",&a,&b,&c);
    d=c-(a-b);
    if(d>-1){
    printf("%d",d);
    }else{printf("0");}
}