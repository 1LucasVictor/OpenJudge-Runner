#include <stdio.h>

int main(void){
    int X, ureshisa;

    scanf("%d", &X);
    ureshisa = 1000 * (X/500) + 5 * ((X%500)/5);
    printf("%d\n", ureshisa);

    return 0;
}
