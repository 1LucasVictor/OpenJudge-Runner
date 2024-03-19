#include<stdio.h>

int Odd_Even_judgment2(int a, int b){
    int x = a*b;
    if(x%2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }    
}

int main(void){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    Odd_Even_judgment2(a,b);
    return 0;
}