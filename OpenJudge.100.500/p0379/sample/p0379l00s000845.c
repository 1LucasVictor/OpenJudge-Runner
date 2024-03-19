#include<stdio.h>

int main(void) {
int n,m;
int i,j;
int ans;

scanf("%d %d", &n, &m);
int matA[n][m];
int matB[m];

for(i = 0; i < n; i++) {
for(j = 0; j < m; j++) {
scanf("%d", &matA[i][j]);
}
}
for(j = 0; j < m; j++) {
scanf("%d", &matB[j]);
}

for(i = 0; i < n; i++) {
ans = 0;
for(j = 0; j < m; j++) {
ans += matA[i][j]*matB[j];
}
printf("%d\n", ans);
}

return (0);
}