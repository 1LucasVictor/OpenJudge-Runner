#include<stdio.h>

int main(void){
    int X, a, b;//a=500円硬貨の数、b=50円硬貨の数

    scanf("%d",&X);

    while(X >= 5){
        if(X >= 500){
            a = X / 500;
            X -= a*500; 
        }
        else if(X >= 5){
            b = X / 5;
            X -= b*5;
        }
    }
    printf("%d\n",a*1000+b*5);
    return 0;
}