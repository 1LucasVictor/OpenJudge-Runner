#include<stdio.h>
int main(void){

    char pic;
    char ch;
    int n,m;
    int A[100][100]={{0}};
    int b[100],c[100];
    scanf("%d %d",&m,&n);

    for (int i = 0; i < m; i++)
        {
        for (int j = 0; j < n; j++)//3行4列　i行j列
            {
                scanf("%d",&A[i][j]);
            }
        }

    for (int j = 0; j < n; j++)
        {
            scanf("%d",&b[j]);
        }

    for (int i = 0; i < m; i++)
        {
          for (int j = 0; j < n; j++)//3行4列　i行j列
            {
                c[i]+=A[i][j]*b[j];
            }
        }
    
    for (int i = 0; i < m; i++)
    {
        printf("%d\n",c[i]);
    }

    return 0;
}
