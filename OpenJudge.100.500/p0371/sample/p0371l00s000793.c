#include <stdio.h>
int main()
{

int n, a[10000], min, max, i, j;
long sum;

scanf ("%d", &n);

for ( i = 0; i < n; i++)
scanf ("%d", &a[i]);

max = a[0];
min = a[0];
sum = a[0];

for (j = 1; j < n; j++) {

if (a[j] > max)
max = a[j];

if (a[j] < min)
min = a[j];

sum = sum + a[j];

}

printf ("%d %d %ld\n", min, max, sum);

return 0;
}