#include<stdio.h>


int main(void){
    int a=0,answer=0;
    scanf("%d",&a);
    if(a>=100){
        answer++;
        a-=100;
    }
    if(a>=10){
        answer++;
        a-=10;
    }
    if(a==1){
        answer++;
    }
    printf("%d\n",answer);
return 0;

}