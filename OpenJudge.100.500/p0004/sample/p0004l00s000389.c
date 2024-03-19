#include<stdio.h>

int calc_gcd(int, int);
int calc_lcm(int, int);

int main(void) {
    int a, b, gcd, lcm;

    while(scanf("%d %d", &a, &b) != EOF) {
        gcd = calc_gcd(a, b);
        lcm = calc_lcm(a, b);
        printf("%d %d\n", gcd, lcm);
    }

    return 0;
}

int calc_gcd(int p, int q) {
    int candidate = 1;
    int gcd = 1;

    while((candidate <= p) && (candidate <= q)) {
        if((p % candidate == 0) && (q % candidate == 0)) gcd = candidate;                                                                                                                                                         
        candidate += 1;
    }

    return gcd;
}

int calc_lcm(int p, int q) {
    int small, large;
    if(p < q) {
        small = p;
        large = q;
    }
    else {
        small = q;
        large = p;
    }

    int x   = 1;
    int lcd = large;
    while(lcd <= 2000000000) {
        lcd = large * x;
        if(lcd % small == 0) return lcd;
        x += 1;
    }

    return 2000000000;
}