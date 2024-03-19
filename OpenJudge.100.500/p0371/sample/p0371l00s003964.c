#include <stdio.h>

int main(){
    int i, n, a[10001], max = -1000001, min = 1000001;
    long long int sum = 0;

    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    printf("%d %d %lld\n", min, max, sum);

    return 0;
}
