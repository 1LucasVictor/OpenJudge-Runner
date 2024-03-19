#include <stdio.h>
int main() {

int n[10000], x[10000], a, i, k, anc, dn;

for (a = 0; a < 10000; a++) {

scanf ("%d" "%d", &n[a], &x[a]);

if (n[a] == 0 && x[a] == 0)
break;

anc = 0;
dn = x[a];

for (i = 1; i < n[a]; i++) {
x[a] = x[a] - i;

k = 1 + i;

if (k >= n[a])
break;

do {

x[a] = x[a] - k;

if (k >= n[a])
break;

if (x[a] > k && x[a] <= n[a])
anc++;

x[a] = x[a] + k;

k++;
} while (x[a] > k);

x[a] = dn;
}

printf ("%d\n",anc);
}

return 0;
}