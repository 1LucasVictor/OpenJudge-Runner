#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    if(c<=a-b){
        c=a-b;
    }
    else if(c<=a*b){
        c=a*b;
    }
    printf("%d\n",c);
    return 0;
}