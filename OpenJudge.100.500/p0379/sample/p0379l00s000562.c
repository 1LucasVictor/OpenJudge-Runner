#include<stdio.h>

int main(void)
{
	int n, m;
	fflush(stdout);
	scanf("%d %d", &n, &m);

	int arr1[100][100];
	int arr2[100];
	int res[100];

	fflush(stdout);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &arr1[i][j]);
		}
	}

	for(int i = 0; i < m; i++){
		scanf("%d", &arr2[i]);
	}

	for(int i = 0; i < n; i++ ){
		res[i] = 0;
		for(int j = 0; j < m; j++){
			res[i]+=arr1[i][j] * arr2[j];
		}
	}

	for(int i = 0; i < n; i++){
		printf("%d\n", res[i]);
	}
	return 0;
}

