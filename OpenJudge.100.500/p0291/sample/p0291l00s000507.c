#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int *ip;
	ip = (int *)malloc(n * sizeof(int));

	int i, j;
	int temp;
	for (i=0; i<n; i++) {
		scanf("%d", &temp);
		ip[i] = temp;
	}

	//????????????//needs improvement in efficiency
	int max = ip[1]-ip[0];
	for (i=0; i<n; i++) {
		for (j=n-1; j>i; j--) {
			if (ip[j]-ip[i] > max) {
				max = ip[j] - ip[i];
			}
		}
	}
	printf("%d\n", max);

	free(ip);
	return 0;
}