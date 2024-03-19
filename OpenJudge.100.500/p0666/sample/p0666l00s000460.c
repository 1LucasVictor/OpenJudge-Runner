#include<stdio.h>
int main(void){
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(-a+b>x)
    printf("dangerous");
    else if(-a+b>0)
    printf("safe");
    else if(-a+b<=0)
    printf("delicious");
    return 0;
}