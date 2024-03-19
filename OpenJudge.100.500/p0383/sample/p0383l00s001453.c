#include<stdio.h>
int main(void){

int n, m, l;
int A[100][100]={{0}};
int B[100][100]={{0}};
long int C[100][100]={{0}};

scanf("%d %d %d",&n, &m, &l);

    // 行列A入力
    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < m; j++)
            {
                scanf("%d",&A[i][j]); 
            }
        }
// 行列B入力
    for (int i = 0; i < m; i++)
        {
        for (int j = 0; j < l; j++)
            {
                scanf("%d",&B[i][j]); 
            }
        }

// 行列C計算
    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < l; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }

// 行列C出力
    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            printf("%ld",C[i][j]);
            if(j!=l-1)printf(" ");
        }
        printf("\n");
    }

return 0;
}
