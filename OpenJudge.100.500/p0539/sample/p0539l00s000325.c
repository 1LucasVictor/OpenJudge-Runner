#include<stdio.h>

int main(void){

    int n, a, b;

    scanf("%d", &n);

    for(a = 1; a <= 9; a++){
        for(b = 1; b <= 9; b++){
            if(n == a*b){
                printf("Yes");
                break;
            }
        }
        if(n == a*b && b <= 9){
            break;
        }
    }
    if(a == 10){
        printf("No");
    }
    return 0;
}