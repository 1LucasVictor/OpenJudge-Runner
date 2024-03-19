#include<stdio.h>

int main(void){
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);

    x = a-b;
    c = c-x;

    if(c<0){
        printf("0");
    }else{
    printf("%d\n",c);
    }
}