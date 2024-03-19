#include<stdio.h>

int calc_gcd(int, int);
int calc_lcm(int, int);

int main(void) {
    int a, b, gcd, lcm;

    while(scanf("%d %d", &a, &b) != EOF) {
        if(a <= b) {
            gcd = calc_gcd(a, b);
            lcm = calc_lcm(a, b);
        } else {
            gcd = calc_gcd(b, a);
            lcm = calc_lcm(b, a);
        }
        printf("%d %d\n", gcd, lcm);
    }

    return 0;
}

int calc_gcd(int small, int large) {
    int gcd = small;

    while(gcd >= 1) {
        if((small % gcd == 0) && (large % gcd == 0)) break;
        gcd--;
    }

    return gcd;
}

int calc_lcm(int small, int large) {
    int x   = 1;
    int lcd = large;
    while(x <= small) {
        lcd = large * x;
        if(lcd % small == 0) break;
        x++;
    }                                                                                                                                                                                            

    return lcd;
}