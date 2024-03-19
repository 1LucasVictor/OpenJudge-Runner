#include <stdio.h>
int main(void){
    int x,fh,f;
    scanf("%d",&x);
    fh=x/500;
    x=x-(fh*500);
    f=x/5;
    printf("%d",fh*1000+f*5);
}