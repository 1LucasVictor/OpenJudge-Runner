#include <stdio.h>
int main()
{
	int a,b,c,i, j, k, n[1000], x[1000], sum;
	int count[100] = { 0 };
	a = 0;
	b = 0;
	sum = 0;
	
	
	while (1) {
	scanf("%d", &n[a]);
	scanf("%d", &x[a]);
	if (n[a] == 0 && x[a] == 0)
		break;
	a++;
}
	while (b != a) {
		for (i = 1; i <= n[b]; i++) {


			for (j = i; j <= n[b]; j++) {



				for (k = j; k <= n[b]; k++) {
					if (i != j && j != k && i != k) {
						sum = i + j + k;
						if (sum == x[b]) {
							count[b]++; 
						}

						sum = 0;
					}

				}

			}
		}
		b++;
	}
	for(c=0;c<b;c++)
	printf("%d \n", count[c]);
	return 0;
}