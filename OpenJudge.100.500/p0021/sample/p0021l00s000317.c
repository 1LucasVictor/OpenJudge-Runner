#include <stdio.h>

int main() {
	int n;
	int a[5000];
	long temp;
	long max;
	
	int i, j;

	scanf("%d", &n);

	while(n) {
		max = -100000;
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);

		for(i = 0; i < n; i++) {
			temp = 0;
			for(j = i; j < n; j++) {
				temp += a[j];
				
				if(temp > max)
					max = temp;
			}
		}

		printf("%ld\n", max);
		
		scanf("%d", &n);
	}

	return 0;
}