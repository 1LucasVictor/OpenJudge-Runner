#include <stdio.h>

int main(){

    int a;
    int b;
    int N;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &N);

    if(a * b>=N){
        printf("%d", N);
    }
    if(N > a * b){
        printf("%d\n", a*b);
    }

    return 0;
}
