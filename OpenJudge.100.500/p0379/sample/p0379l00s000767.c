#include <stdio.h>
 
int main() {
  int n, m;
  int o,p;
  int i,j;
 
  scanf("%d %d",&n,&m);
  int t[100][100]={0};
  int u[100]={0}; 
  int v=0;

  for(i = 1; i <= n; i++) {
    for(j = 1; j <= m; j++) {
      scanf("%d",&o);
      t[i][j] = o;
  }}
  for(j = 1; j <= m; j++) {
      scanf("%d",&p);
      u[j]=p;
  }
 
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= m; j++) {
    v += t[i][j] * u[j];
    }
    printf("%d\n", v);
    v = 0;
  }
 
  return 0;
}
