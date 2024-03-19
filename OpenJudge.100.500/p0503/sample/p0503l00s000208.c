#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j;
	long long int *a;
	scanf("%d", &n);
	a = (long long int *)malloc(sizeof(long long int) * n);
	for(i = 0; i < n; i++){
		scanf("%d ", &a[i]);
	}
	for(i = 0; i < n / 2  -1; i++){
		for(j = i + 1; j < n / 2; j++){
			if(a[i] == a[j] || a[i + n / 2] == a[j + n / 2]){
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	
	return 0;
}