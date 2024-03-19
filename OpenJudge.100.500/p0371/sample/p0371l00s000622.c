#include<stdio.h>
int main(void) {
    int i;
    int n;
    int max;
    int min;
    long int sum = 0;
    int a[10000];
    scanf("%d", &n);
     
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    for(i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        } else if(a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}