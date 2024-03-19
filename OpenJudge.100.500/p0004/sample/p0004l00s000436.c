#include<stdio.h>

int
main(int argc, char *argv[])
{
        char buf[64];
        long int a, b, tmp;
        long int GCD, LCM;

        while (fgets(buf, 64, stdin)) {
                sscanf(buf, "%ld %ld", &a, &b);
                if (a > b) {
                        tmp = a;
                        a = b;
                        b = tmp;
                }
                GCD = ((b - a) > a)? a : b - a;
                for (; GCD > 0; GCD--) {
                        if ((a % GCD == 0) && (b % GCD == 0))
                                break;
                }
                LCM = a / GCD * b;
                printf("%ld %ld\n", GCD, LCM);

        }
        return 0;
}