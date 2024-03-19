#include <stdio.h>
int main(void)
{

int x[101][101], y[101];
int a[101] = {0};
int m, n, i, j;

scanf("%d %d",&m,&n);

for(i = 1; i <= m; i++){
 for(j = 1; j <= n; j++)
scanf("%d",&x[i][j]);
}

for(i = 1; i <= n; i++)
scanf("%d",&y[i]);

for(i = 1; i <= m; i++){
for(j = 1; j <= n; j++)
a[i] += x[i][j] * y[j];

printf("%d\n",a[i]);
}

return 0;
}