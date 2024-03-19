#include<stdio.h>
int main()
{
    long int A[100][100];
    long int B[100][100];
    long int C[100][100];
    long int m,n,l,i,j,k,sum=0;
    scanf("%ld %ld %ld",&n,&m,&l);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%ld", &A[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%ld", &B[i][j]);
        }
    }
     for (i=0;i<n;i++) {
      for (j=0;j<l;j++) {
            sum = 0;
        for (k=0;k<m;k++) {
          sum = sum+A[i][k]*B[k][j];
        }
        C[i][j] = sum;
      }
    }
    for (i=0;i<n;i++) {
      for (j=0;j<l-1;j++) {
        printf("%ld ",C[i][j]);
      }
      printf("%ld\n",C[i][l-1]);
    }

  return 0;
}

