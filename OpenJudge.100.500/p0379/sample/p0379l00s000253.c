#include <stdio.h>

int main(void) {
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    int sum;
    int matrix[n][m];
    int vector;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &vector);
        for (int j = 0; j < n; j++) {
            matrix[j][i] *= vector; 
        }
    }

    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
        sum += matrix[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}
