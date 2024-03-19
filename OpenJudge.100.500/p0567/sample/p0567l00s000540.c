#include<stdio.h>
int main(){
    int a, b, c, d, e;
    scanf("%d %d %d",&a,&b,&c);
    d=a-b;
    e=c-d;
    if(e<=0){printf("0",e);}
    else{printf("%d",e);}
    return 0;
}