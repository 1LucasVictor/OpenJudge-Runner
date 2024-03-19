#include <stdio.h>

int main() {
    int n, val500=0, val5=0, mult500=0, mult5=0, total=0, novovalor=0;
    scanf("%d", &n);
    val500 = n/500;
    novovalor = n-(val500*500);
    val5 = novovalor/5;
    mult500 = val500*1000;
    mult5 = val5*5;
    total = mult500+mult5;
    printf("%d\n", total);

    return 0;
}

