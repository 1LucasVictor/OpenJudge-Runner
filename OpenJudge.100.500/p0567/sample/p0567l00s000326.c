#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d;
    if(a-b>=c){d=0;}
    else{d=c-(a-b);}
    printf("%d\n",d);
    return 0;
}