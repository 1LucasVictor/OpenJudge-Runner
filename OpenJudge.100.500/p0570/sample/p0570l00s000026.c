#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c = a+b;
    c %= 2;
    if(c == 0){
        c = (a+b)/2;
        printf("%d",c);
    }else{
        printf("IMPOSSIBLE");
    }
    return 0;
}