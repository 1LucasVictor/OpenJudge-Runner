#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int t, count = 0;
    for (int i = 0; i < n; i++) {
        if (count > 0) {
            printf("DENIED");
            return 0;
        }
        scanf("%d", &t);
        if (t % 2 == 0 ) {
            if (t % 3 == 0 || t % 5 == 0) {
                ;
            } else {
                count++;
            }
        }
    }
    printf("APPROVED");

    return 0;
}
