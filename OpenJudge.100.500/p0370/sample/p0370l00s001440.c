#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

#define REP(i,n) for(i=0;i<n;i++)

int iin() {
    int i;
    scanf("%d", &i);
    return i;
}

long long llin() {
    long long i;
    scanf("%lld", &i);
    return i;
}

double din() {
    double i;
    scanf("%lf", &i);
    return i;
}

char cin() {
    char c;
    scanf("%c", &c);
    return c;
}

void stin(char *s) {
    scanf("%s", s);
}

void iout(int i) {
    printf("%d\n", i);
}

void llout(long long i) {
    printf("%lld\n", i);
}

void dout(double i) {
    printf("%lf\n", i);
}

void cout(char c) {
    printf("%c\n", c);
}

void stout(char *s) {
    printf("%s\n", s);
}

int main() {
    int a, b;
    char op[128];
    while (1) {
        a = iin();
        stin(op);
        b = iin();
        if (strcmp(op, "?") == 0) {
            break;
        } else if (strcmp(op, "+") == 0) {
            iout(a + b);
        } else if (strcmp(op, "-") == 0) {
            iout(a - b);
        } else if (strcmp(op, "*") == 0) {
            iout(a * b);
        } else if (strcmp(op, "/") == 0) {
            iout(a / b);
        }
    }
    return 0;
}

