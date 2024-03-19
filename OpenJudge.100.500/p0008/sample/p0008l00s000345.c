#include<stdio.h>


int IsPrime(int n) {
	if (n < 2) return 0;
	if (n == 2) return 1;

	int count = 0;
	int i, j, k;
	int flg[n];

	for (i = 1; i <= n; i++)
		flg[i] = 1;

	for (j = 2; j <= n; j++) {
		if (flg[j] == 1) count++;
		for (k = j * 2; k <= n; k += j)
			flg[k] = 0;
	}
	return count;
}

int main(void)
{
	int n[30];
	int i,j,a=0;
	int count = 0;

	while(scanf("%d",&n[a]) != EOF && a < 30)
		if ((1 <= n[a]) && (n[a] <= 999999)) {
			a++;
		}

	for (i = 0; i < a; i++) {
		count = IsPrime(n[i]);
		printf("%d\n",count);
	}
	return 0;
}