#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &a);
        if (a % 2 == 1) {
            ;
        }
        else if (a % 2 == 0 && (a % 5 == 0 || a % 3 == 0)) {
            ;
        }
        else {
            printf("DENIED\n");
            return 0;
        }
    }
    printf("APPROVED\n");
    return 0;
}