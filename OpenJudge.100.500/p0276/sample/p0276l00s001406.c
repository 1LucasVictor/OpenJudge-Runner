#include <stdio.h>
#define MAX 100

int main() {
int M[MAX][MAX],i,j,n,m,p,r;

scanf("%d",&n);
for(i = 1; i <= n; i++) {
  for(j = 1; j <= n; j++) {
    M[i][j] = 0;
  }
}
for(i = 1; i <= n; i++) {
  scanf("%d %d",&m,&r);
  for(j = 1; j <= r; j++) {
    scanf("%d",&p);
    M[m][p] = 1;
  }
}

for(i = 1; i <= n; i++) {
  for(j = 1; j <= n; j++) {
  printf("%d",M[i][j]);
  if(j == n) break;
  printf(" ");
}
printf("\n");
}
return 0;
}