#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d",&a);
    b=a/3600;//h
    c=(a-b*3600)/60;//m
    d=a-b*3600-c*60;//s
    printf("%d:%d:%d\n",b,c,d);
    return 0;
}

