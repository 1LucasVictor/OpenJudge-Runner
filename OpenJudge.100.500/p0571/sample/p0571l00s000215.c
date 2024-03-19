#include <stdio.h>

int main(void){
    int N, A, B;
    int taku, buss, ans;

    scanf("%d %d %d", &N, &A, &B);

    taku = B;
    buss = A * N;
    if(taku<buss)
        ans = taku;
    else
        ans = buss;

    printf("%d\n", ans); 
}

