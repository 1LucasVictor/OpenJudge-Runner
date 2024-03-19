#include<stdio.h>
int main(){
    int a,b;
    int producted;
    // スペース区切りの整数の入力
    scanf("%d %d", &a , &b);
    producted = (a * b) % 2;
    if(producted == 0){
        printf("Even");
    }else{
        printf("Odd");
    }  

    return 0;
}