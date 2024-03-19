#include <stdio.h>
#define max 101
typedef struct{
  int num;
  int degree;
  int Adj[max];
} node;
int main()
{
  int n, A[max+1][max+1], i, j;
  node node[max];
  
  for(i = 0 ; i < max ; i++){
    for(j = 0 ; j < max ; j++) A[i][j] = 0; }

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&node[i].num,&node[i].degree);
    for(j = 0 ; j < node[i].degree ; j++){
      scanf("%d",&node[i].Adj[j]);
      A[node[i].num][node[i].Adj[j]] = 1; }
  }

  for(i = 1 ; i <= n ; i++){
    for(j = 1 ; j <= n-1 ; j++) printf("%d ",A[i][j]);
    printf("%d\n",A[i][n]); }

  return 0;
}

