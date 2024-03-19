#include <stdio.h>
int main() {

int n, a[10000], min, max, sum, i, j;

scanf ("%d", &n);

for (i = 0; i < n; i++)
scanf ("%d", &a[i]);

max = a[0];
min = a[0];
sum = 0;

for (j = 0; j < n; j++) {

if (a[j] > max)
max = a[j];

if (a[j] < min)
min = a[j];

sum = sum + a[j];

}

printf ("%d %d %d\n",min, max, sum);

return 0;
}