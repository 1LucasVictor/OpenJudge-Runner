// 1_1_C
#include <stdio.h>
#include <math.h>

int is_prime(long);

int main(){
    int n, i, cnt = 0;
    long number;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%ld", &number);
        if(is_prime(number) == 0){
            cnt += 1;
        }
    }

    printf("%d\n", cnt);
    return 0;
}

int is_prime(long number){
    if(number == 2) return 0;
    if(number % 2 == 0) return 1;

    long divisor;
    for(divisor = 3; divisor <= sqrt(number); divisor += 2){
        if(number % divisor == 0) return 1;
    }
    return 0;
}