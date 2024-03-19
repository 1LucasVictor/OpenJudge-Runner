#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int debt=100000;
    int i;
    scanf("%d",&i);
    for(;i>0;i--){
        debt+=debt*0.05;
        debt+=999;
        debt/=1000;
        debt*=1000;
    }
    printf("%d\n",debt);
    return 0;
}