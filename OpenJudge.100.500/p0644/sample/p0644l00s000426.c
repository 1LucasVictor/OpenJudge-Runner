#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d",&a);
    if(a-1==0||a-1==100||a-1==110||a-1==10){
        b=1;
    }else{
        b=0;
    }
    if(a-10==0||a-10==100||a-10==1||a-10==0||a-10==101){
        c=1;
    }else{
        c=0;
    }
    if(a-100==0||a-100==10||a-100==1||a-100==11){
        d=1;
    }else{
        d=0;
    }
    a=c+b+d;
    printf("%d",a);
    return 0;
}