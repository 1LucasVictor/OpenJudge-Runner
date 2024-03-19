#include<stdio.h>


int main(void){
    int a;
    scanf("%d",&a);
    if(a==111){printf("3");}
    if(a==101||a==110||a==011){printf("2");}
    if(a==001||a==010||a==100){printf("1");}
    if(a==000){printf("0");}


    return 0;
}