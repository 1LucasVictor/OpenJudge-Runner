#include <stdio.h>

int main(void) {

    long int X;
    long int en500;
    long int en5;
    long int result = 0;

    // input
    scanf("%ld", &X);

    en500 = X / 500; // 500円の枚数
    en5 = (X - (en500 * 500)) / 5;  // 5円の枚数

    result = en500 * 1000 + en5 * 5;

    // output
    // printf("%ld, %ld\n", en500, en5);
    printf("%ld\n", result);

    return 0;
}