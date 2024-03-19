#include<stdio.h>
int main(void){
    int n, a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if(i % n == 0){
            printf("OK\n");
            break;
        }
    if(i == b){
        printf("NG\n");
    }
    }
}