#include<stdio.h>
int main()
{
    int a,b,c,r;
    scanf("%d%d%d",&a,&b,&c);
    r=c-(a-b);
    if(b<a && a-b>=c){
        printf("0");
    }
    else if(b<a && a-b<c){
        printf("%d",r);
    }
    return 0;
}
