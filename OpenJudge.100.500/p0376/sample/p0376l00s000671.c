#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = n - 1 ; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (i != n) printf("%d ", arr[i - 1]);
        else printf("%d", arr[i - 1]);
    }
    puts("");
    return 0;
}
