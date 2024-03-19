#include <stdio.h>

int A[100][100];
int B[100][100];

int main(void)
{
int n, m, l, i, j, k;
long sum;

scanf("%d %d %d", &n, &m, &l);

for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
scanf("%d", &A[i][j]);
}
}

for (j = 0; j < m; j++)
{
for (k = 0; k < l; k++)
{
scanf("%d", &B[j][k]);
}
}

for (i = 0; i < n; i++)
{
for (k = 0; k < l; k++)
{
sum = 0L;
for (j = 0; j < m; j++)
{
sum += (long)A[i][j] * (long)B[j][k];
}
if (k > 0) { putchar(' '); }
printf("%ld", sum);
}
putchar('\n');
}

return 0;
}