#include<stdio.h>                                                                                                                                                        

long calc_gcd(long, long);
long calc_lcm(long, long, long);

int main(void) {
    long a, b, gcd, lcm;

    while(scanf("%ld %ld", &a, &b) != EOF) {
        if(a <= b) gcd = calc_gcd(a, b);
        else       gcd = calc_gcd(b, a);
        lcm = calc_lcm(a, b, gcd);
        printf("%d %d", gcd, lcm);
    }

    return 0;
}

long calc_gcd(long small, long large) {
    if(large % small == 0) return small;

    int div = 2;
    long gcd = small;
    while(gcd >= 1) {
        gcd = small / div;
        if(large % gcd == 0) break;
        div++;
    }

    return gcd;
}

long calc_lcm(long p, long q, long gcd) {
    long lcm = p * q / gcd;
    return lcm;
}