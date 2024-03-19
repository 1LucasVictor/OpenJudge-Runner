#include<stdio.h>

int main(void){
    int a,b,c,d,e=0;
    scanf("%d",&a);
    b=a%10;
    c=(a%100)/10;
    d=a/100;
    if(b==7){
        e=1;
    }
     if(c==7){
        e=1;
    }
     if(d==7){
        e=1;
    }
    if(e==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}