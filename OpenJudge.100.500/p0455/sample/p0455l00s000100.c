#include<stdio.h>
int main (void){
    int x;
    int result;
    scanf("%d",&x);
    if(1<=x<=10){
        result = x+x*x+x*x*x;
    }
    printf("%d",result);
}