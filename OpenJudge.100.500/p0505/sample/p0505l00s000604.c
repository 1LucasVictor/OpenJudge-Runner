#include <stdio.h>

int main()
{
	int h, n, i;
	int sum = 0;
	int *a;
	scanf("%d %d", &h, &n);
	a = (int *)malloc(sizeof(int) * n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		sum += a[i];
	}
	if(sum >= h){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	free(a);
	
	return 0;
}