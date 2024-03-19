#include <stdio.h>
int main()
{
  int n,m,l;
  int i,j,k;
  scanf("%d %d %d",&n,&m,&l);
  int A[n][m];
  int B[m][l];
  long long int C[n][l];


  //input array A
  for(i = 0;i< n;i++)
    {
      for(j = 0;j< m;j++)
        {
          scanf("%d",&A[i][j]);
        }
    }
  //input array B
  for(j = 0;j< m;j++)
    {
      for(k = 0;k< l;k++) //i++ to natteite segementation fault
        {
          scanf("%d",&B[j][k]);
        }
    }
  //calculation
  for(i = 0;i< n;i++)
    {
      for(k = 0;k< l;k++)//i++ to natteite segmentation fault
        {
          C[i][k] = 0;
          for(j = 0; j < m; j++)
            {
              C[i][k] +=A[i][j]*B[j][k];
            }
        }
    }

  //output array C
  for(i = 0;i< n;i++)
    {
      for(k = 0;k< l-1;k++)
        {
          printf("%lld ",C[i][k]);
        }
      printf("%lld\n",C[i][k]);
    }
  return 0;
}