#include <stdio.h>

int main(){
    int matrix[101][101];
    int b[101],c[101];
    int i,j,k;

    for(i=1; i<=100; i++){
        for(j=1; j<=100; j++){
            matrix[i][j] = 0;
        }
    }
    for(i=1; i<=100; i++){
        b[i] = 0;
        c[i] = 0;
    }
    int n;
    int row_num, column_num;
    char op;
    scanf("%d %d", &row_num, &column_num);
    /*for(i=0; i<n; i++){
        op = getchar();
        scanf("%d %d %d %d", &b, &f, &r, &v);
        house_status[b][f][r] += v;
    }*/
    for(i=1; i<=row_num; i++){
        op = getchar();
        for(j=1; j<=column_num; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    /*for(i=1; i<=row_num; i++){
        for(j=1; j<=column_num; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }*/
    for(i=1; i<=column_num; i++){
        op = getchar();
        scanf("%d", &b[i]);
    }
    for(i=1; i<=row_num; i++){
        for(j=1; j<=column_num; j++){
            c[i] += matrix[i][j] * b[j];
        }
    }
    for(i=1; i<=row_num; i++){
        printf("%d\n", c[i]);
    }
}

