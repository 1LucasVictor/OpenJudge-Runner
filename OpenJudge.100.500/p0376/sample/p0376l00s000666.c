#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x1[n], x2[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &x1[i]);
        x2[n-1-i] = x1[i];
    }
    for (int j=0; j<n; j++) {
        printf("%d", x2[j]);
        if (j == n - 1) {break;}
        putchar(' ');
    }
    putchar('\n');
    return 0;
}

