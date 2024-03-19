#include <stdio.h>
#include <stdlib.h>

#define MAX 101

int main() {
    int n, m;
    int *table[MAX];
    int d;
    int b[MAX];

    scanf("%d %d", &n, &m);
    for (int i=0; i<n; ++i) {
        table[i] = (int*)malloc(sizeof(int) * m);
        for (int j=0; j<m; ++j) {
            scanf("%d", &d);
            table[i][j] = d;
        }
    }

    for (int i=0; i<m; ++i) {
        scanf("%d", &b[i]);
    }

    for (int i=0; i<n; ++i) {
        int sum = 0;
        for (int j=0; j<m; ++j) {
            sum += table[i][j] * b[j];
        }
        printf("%d\n", sum);
        free(table[i]);
    }

    return 0;
}

