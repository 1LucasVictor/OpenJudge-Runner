#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    int n;
    long long int d;
    scanf("%d%lld", &n, &d);
    long long int *x = malloc(sizeof(long long int) * n);
    long long int *y = malloc(sizeof(long long int) * n);
    for (i = 0; i < n;i++){
        scanf("%lld%lld", &x[i], &y[i]);
    }
    long long int cnt = 0;

    long long int p;
    for (i = 0; i < n;i++){
        p = x[i] * x[i] + y[i] * y[i];
        if(p<=d*d){
            cnt++;
        }
    }
    printf("%lld", cnt);
    return 0;
}