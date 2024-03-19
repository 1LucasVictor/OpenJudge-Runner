#include<stdio.h>

int main(){
    int x,tmp,tmp2;
    scanf("%d",&x);
    tmp=x/500;
    x=x%500;
    tmp2=x/5;
    printf("%d",tmp*1000+tmp2*5);
    return 0;
}