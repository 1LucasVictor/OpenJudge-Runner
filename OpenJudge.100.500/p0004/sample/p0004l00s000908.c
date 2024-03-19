#include <stdio.h>

int main() {
    long int a, b, gcd, lcm;
    long int tmp_a, tmp_b, tmp;
    while (scanf("%ld %ld", &a, &b) == 2) {
        if (a < b) {
            tmp_a = a;
            tmp_b = b;
        } else {
            tmp_a = b;
            tmp_b = a;
        }
        while (tmp_b % tmp_a != 0) {
            tmp = tmp_b % tmp_a;
            tmp_b = tmp_a;
            tmp_a = tmp;
        }
        gcd = tmp_a;
        lcm = gcd * a / gcd * b / gcd;
        printf("%ld %ld\n", gcd, lcm);
    }
    return 0;
}

