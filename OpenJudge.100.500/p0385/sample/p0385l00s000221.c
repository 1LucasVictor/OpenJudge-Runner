#include<stdio.h>
int main(void){
    int y,s,n=0,i,num,tmp;
    while(1){
        scanf("%d",&num);
        if(num == 0) break;
        y = 0;
        y = (num/1000);
        tmp = num%1000;
        y += tmp/100;
        tmp = num % 100;
        y += tmp/10;
        tmp = num % 10;
        y += tmp;
        printf("%d\n",y);
    }
    return 0;
}