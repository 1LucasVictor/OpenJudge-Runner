#include<stdio.h>
#include<stdlib.h>
int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){
	int n;
	int *a;
	int flg = 1;
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int) * n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare_int);
	for(int j=0; j<n-1; j++){
		if(a[j] == a[j+1]){
			flg = 0;
			break;
		}
	}
	if(flg == 1){
		printf("YES\n");
	} else if(flg == 0){
		printf("NO\n");
	}
	return 0;
}
