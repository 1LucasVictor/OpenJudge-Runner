// AtCoder150 C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>
#include <stdlib.h>
#include <ctype.h>

// qsortで用いる比較用関数．*a<*bならaが先になる．
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int revcompare(const void* a, const void* b) {
    return *(int*)b- *(int*)a;
}

double dmax(double x, double y){
    if(x < y) return y;
    return x;
}

int main(void)
{
    int i,j,n;
    double a,b;

    scanf("%lf %lf", &a, &b);

    printf("%lld", (long long int)(a*b));
    return 0;

}