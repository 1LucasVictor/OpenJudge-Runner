#include <stdio.h>

int main(void){

    int N = 0;
    scanf("%d", &N);
    N %= 10;

    if (N == 3){
        puts("bon");
    } else if (N == 0 || N == 1 || N == 6 || N == 8){
        puts("pon");
    } else {
        puts("hon");
    }

    return 0;
}