#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; 0 <= i; i--) {
        if (0 < i) printf("%d ", arr[i]);
        else printf("%d\n", arr[i]);
    }

    return 0;
}
