#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j;
	long long int a[200000];
	scanf("%d", &n);
	//a = (long long int *)malloc(sizeof(long long int) * n);
	for(i = 0; i < n; i++){
		scanf("%lld ", &a[i]);
	}
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				printf("NO\n");
				return 0;
			}
		}
	}
	/*
	for(i = 0; i < n - 1; i += 2){
		for(j = i + 1; j < n - 1; j++){
			if(a[i] == a[j] || a[i + 1] == a[j + 1]){
				printf("NO\n");
				return 0;
			}
		}
		if(a[i] == a[j + 1]){
			printf("NO\n");
			return 0;
		}
	}*/
	printf("YES\n");
	
	return 0;
}