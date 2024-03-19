#include<stdio.h>
#define N 101

int main(){
  int i, j, k, l, n, v[N][N];
  scanf("%d", &n);
  for(i = 0;i < n;i++)
    for(j = 0;j < n;j++)
      v[i][j] = 0;
  for(i = 1;i < n+1;i++){
    scanf("%d%d", &v[i][0], &k);
    v[i][0] += k;
    for(j = 1;j < v[i][0]-i+1;j++){
      scanf("%d", &l);
      v[i][l]++;
    }
  }
  for(i = 1;i < n+1;i++){
    for(j = 1;j < n;j++){
      printf("%d ", v[i][j]);
    }
    printf("%d\n", v[i][j]);
  }
  return 0;
}