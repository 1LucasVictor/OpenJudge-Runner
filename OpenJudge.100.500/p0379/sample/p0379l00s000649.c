#include<stdio.h>
int main(void){
    int matrix[100][100];
    int vector[100];
    int solution = 0;
    int i, j, m, n;

    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        scanf("%d", &vector[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            solution += matrix[i][j] * vector[j];
        }
        printf("%d\n", solution);
        solution = 0;
    }

    return 0;
}

