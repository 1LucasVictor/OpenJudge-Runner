#include <stdio.h>

#define N 8
#define FR -1
#define NFR 1

int m[N][N], r[N], c[N], dp[2*N-1], dn[2*N-1];

void print()
{
  int i, j;
  
  for (i = 0; i < N; i++)
    for ( j = 0; j < N; j++)
      if (m[i][j] == NFR)
	if (r[i] != j)
	  return;
  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      if (r[i] == j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
}

void recursive(int i)
{
  int j;
  
  if (i == N){
    print();
    return;
  }
  for (j = 0; j < N; j++){
    if (c[j] != FR || dp[i+j] != FR || dn[i-j+N-1] != FR)
      continue;
    r[i] = j;
    c[j] = dp[i+j] = dn[i-j+N-1] = NFR;
    recursive(i+1);
    r[i] = c[j] = dp[i+j] = dn[i-j+N-1] = FR;
  }
}

int main()
{
  int k, row, col, i, j;

  for (i = 0; i < N; i++)
    r[i] = c[i] = FR;
  for (i = 0; i < 2*N-1; i++)
    dp[i] = dn[i] = FR;
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      m[i][j] = FR;
  scanf("%d",&k);
  for (i = 0; i < k; i++){
    scanf("%d%d",&row,&col);
    m[row][col]  = NFR;
  }
  recursive(0);
  
  return 0;
}

