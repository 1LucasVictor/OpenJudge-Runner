#include<stdio.h>

int main(){
	int i, n;
	scanf("%d", &n);
	int a[100];
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (i = n - 1; i >= 0; i--){
		printf("%d", a[i]);
		if (i == 0)break;
		printf(" ");
	}
printf("\n");
	return 0;
}
