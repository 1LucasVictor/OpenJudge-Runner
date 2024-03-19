#include <stdio.h>
#define WHITE 0
#define BLACK 1
#define INF 10000000
int d[100], pi[100], color[100], A[2005][2005];
 
int main(){
  int i, j, n, w=0, min = 2001;
  scanf("%d",&n);
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      scanf("%d",&A[i][j]);
      d[i] = 5;
    }
  }
  for(i = 1; i <=n; i++){
    for(j = 1; j <= n; j++){
      if(d[j] > A[i][j] && A[i][j] > 0) d[j] = A[i][j];
    }
  }
  for(i = 2; i <= n; i++){
    w += d[i];
    //printf("%d\n",d[i]);

  }
  printf("%d\n",w);
  return 0;
}