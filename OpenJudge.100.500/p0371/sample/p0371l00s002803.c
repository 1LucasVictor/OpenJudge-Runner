#include <stdio.h>

int main() {
    int i, n;
    int data[10000];
    int min, max, sum;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++) scanf("%d", &data[i]);
    max = data[0];
    min = data[0];
    sum = data[0];
    for(i = 1; i < n; i++) {
        if(data[i] < min) min = data[i];
        else if(data[i] > max) max = data[i];
        sum += data[i];
    }
    printf("%d %d %d\n", min, max, sum);
    return 0;
}