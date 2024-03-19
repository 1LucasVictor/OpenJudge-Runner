#include <stdio.h>
int main(void){
    int n, a[10000], i;
    
    scanf("%d\n", &n);
    for(i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }
    
    int min = a[0], max = a[0];
    long sum = 0;
    for(i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        sum += a[i];
    }
    
    printf("%d %d %d\n", min, max, sum);
    
    return 0;
}
