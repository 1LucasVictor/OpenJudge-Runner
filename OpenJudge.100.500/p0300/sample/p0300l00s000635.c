#include <stdio.h>

int main()
{

int a, b, c, d, i, j, suretsus[10000], suretsut[500], answer = 0;

scanf ("%d", &i);

for (c = 0; c < i; c++) 
	scanf ("%d", &suretsus[c]);

scanf ("%d", &j);

for (d = 0; d < j; d++) 
	scanf ("%d", &suretsut[d]);

for (a = 0; a < i; a++) {

for (b = 0; b < j; b++) {

if (suretsus[a] == suretsut[b])
answer++;

}
}

if (suretsus[0] == suretsus[1])
answer = answer / i;

printf ("%d\n",answer);

return 0;
}