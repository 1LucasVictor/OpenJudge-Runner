#include <stdio.h>

char A[1000 * 1000 * 1000];
int main() {
    int n;
    scanf("%d", &n);
    for (int i =0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (A[a] == 1) {
            printf("NO");
            return 0;
        } else {
            A[a] = 1;
        }
    }
    printf("YES");
    return 0;
}