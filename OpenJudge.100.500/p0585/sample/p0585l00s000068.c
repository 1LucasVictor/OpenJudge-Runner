#include <stdio.h>

int main(void){
    int a, b, t;
    scanf("%d %d %d", &a, &b, &t);

    if(a >= 20 || a < 1 || b < 1 || b >= 20 || t >= 20 || t < 1)
        b = 0; a = 1; t = 1;

    int A = a;
    int B = b;
    double T = t;
    while(a < T + 0.5){
        b += B;
        a += A;
    }
    printf("%d\n", b);

    return 0;
}