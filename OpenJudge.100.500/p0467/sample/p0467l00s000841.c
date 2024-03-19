#include<stdio.h>

int main(){
    int a,b,c,k;
    scanf("%d %d %d %d",&a, &b, &c, &k);
    if(k<=a){
        printf("%d",k);
    }else if(k<=a+b){
        printf("%d",a);
    }else if(k>a+b){
        printf("%d",a-(k-(a+b)));
    }
}