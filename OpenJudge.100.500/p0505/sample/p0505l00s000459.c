#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int h = 0, n = 0;
    scanf("%d %d", &h, &n);
    
    int *a = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        h -= a[i];
    }
    if (h <= 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}