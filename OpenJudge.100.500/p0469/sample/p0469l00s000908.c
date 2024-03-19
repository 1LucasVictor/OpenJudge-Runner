#include<stdio.h>

int main(){
    int K,A,B;
    scanf("%d", &K);
    scanf("%d %d", &A, &B);
    int i, f;
    f = 0;

    for (i = K; i <= 1000; i+=K){
        if(i>=A&&i<=B){
            f = 1;
            break;
        }
    }
    if(f) printf("OK\n");
    else  printf("NG\n");
    
    return 0;
}