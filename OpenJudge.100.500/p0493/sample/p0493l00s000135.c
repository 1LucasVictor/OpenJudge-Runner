#include <stdio.h>

int main(void){

    long n, res=0;

    scanf("%ld", &n);

    for(;n>=500;){
        n = n -500;
        res += 1000;
    }

    for(; n>=5;){

        n = n - 5;
        res += 5;
    }

    printf("%ld\n", res);

    return 0;
}