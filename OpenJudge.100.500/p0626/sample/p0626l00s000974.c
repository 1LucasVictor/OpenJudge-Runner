#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int power(int,int);
int main(void){
    int D, N;
    scanf("%d %d", &D, &N);
    printf("%d\n", power(100, D) * N);
    return 0;
}
int power(int a, int b){
    int i, w=1;
    for(i=0; i<b; i++) w *= a;
    return w;
}
