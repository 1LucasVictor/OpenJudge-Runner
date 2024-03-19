#include <stdio.h>

int solve(int n) {
        if (n == 0) {
                return 0;
        }

        if (n % 10 == 7) {
                return 1;
        }

        solve(n / 10);
}

int main() {
        int n;
        int rc;

        rc = scanf("%3d", &n);
        if (rc == 0) {
                perror("scanf");
                return 1;
        }

        if (solve(n) == 1) {
                printf("Yes\n");
        } else {
                printf("No\n");
        }

        return 0;
}
