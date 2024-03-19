#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, i, j;
	long long int *a;
	scanf("%d", &n);
	a = (long long int *)malloc(sizeof(long long int) * n);
	for(i = 0; i < n; i++){
		scanf("%d ", &a[i]);
	}
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	
	return 0;
}