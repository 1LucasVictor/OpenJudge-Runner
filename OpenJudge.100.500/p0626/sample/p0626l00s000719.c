#include<stdio.h>
#include<stdlib.h>

int main(){
    int D, N, out, i;
    scanf("%d %d", &D, &N);
    for(i=0;i<D;i++) N *= 100;

    printf("%d\n", N);
    return 0;
}
