#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a[n-1-i]);
        } else {
            printf(" %d", a[n-1-i]);
        }
    }

    printf("\n");
    
    return 0;
}
