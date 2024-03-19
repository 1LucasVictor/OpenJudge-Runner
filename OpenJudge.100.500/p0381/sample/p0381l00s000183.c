#include<stdio.h>

int main()
{
	int i,j,k,n,x,sum,count;
	sum = 0;
	count = 0;
	scanf("%d", &n);
	scanf("%d", &x);

	for (i = 1; i <= n; i++) {


		for (j = i; j <= n; j++) {



			for (k = j; k <= n; k++) {
				if (i != j && j != k && i != k) {
					sum = i + j + k;
					if (sum == x) count++;
					sum = 0;
				}

			}

		}
	}
	printf("%d \n", count);
	return 0;
}