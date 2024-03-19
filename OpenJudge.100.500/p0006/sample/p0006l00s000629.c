#include<stdio.h>
int main(void){
    int n;
    int d=100000;
    int tmp;
    scanf("%d",&n);
    while(n>0){
        d*=1.05;
        tmp=d%1000;
        if(tmp!=0){
             d+=1000;
             d-=tmp;
        }
        n--;
    } 
    printf("%d\n",d);
    return 0;
}