#include<stdio.h>

int main(){
    int a, min = 1000000, max = -1000000, n, i;
    long long sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &a);
        sum += (long long)a;
        if (a < min)
        min = a;
        if (a > max)
        max = a;
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}

