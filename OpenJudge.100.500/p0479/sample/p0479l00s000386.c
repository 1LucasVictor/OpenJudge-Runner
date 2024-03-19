#include <stdio.h>
#include <stdlib.h>

int main() {
        int i, n, a;
        int *nr_sub;

        if (scanf("%6d", &n) == 0) {
                perror("scanf");
                return 1;
        }

        if ((nr_sub = malloc(sizeof(int) * n)) == 0) {
                perror("malloc");
                return 1;
        }

        for (i = 1; i < n; i++ ) {
                if (scanf(" %6d", &a) == 0) {
                        perror("scanf");
                        free(nr_sub);
                        return 1;
                }
                nr_sub[a-1]++;
        }

        for (i = 0; i < n; i++) {
                printf("%d\n", nr_sub[i]);
        }

        free(nr_sub);

        return 0;
}
