#include<stdio.h>

int main(void)
{
    int n, min=1000001, max=-1000001, i, j;
    long long sum=0;
    scanf("%d", &n);
    for (i =0; i < n; i++) {
        scanf("%d", &j);
        if (min > j) min=j;
        if (max < j) max=j;
        sum+=j;
    }
    printf("%ld %ld %ld\n", min, max, sum);
}

