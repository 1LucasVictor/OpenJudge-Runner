#include <stdio.h>

int cmp_int(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main(void) {
    int N, i, j, e[3];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &e[j]);
        }
        qsort(e, 3, sizeof(int), cmp_int);

        if (e[0]*e[0] + e[1]*e[1] == e[2]*e[2]) {
            puts("YES");
        }
        else {
            puts("NO");
        }
    }

    return 0;
}