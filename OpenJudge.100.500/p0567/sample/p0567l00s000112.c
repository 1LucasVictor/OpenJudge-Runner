#include<stdio.h>

int main()
{
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if((b+c)>a){
        t=c-(a-b);
        printf("%d\n",t);
    }
    else{
        printf("0\n");
    }
}
