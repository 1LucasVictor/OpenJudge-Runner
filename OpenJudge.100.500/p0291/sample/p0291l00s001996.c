#include <stdio.h>

int main(void){
	int n, i, j, max = -100000;
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(max < a[j] - a[i])
				max = a[j] - a[i];
		}
	}
	printf("%d\n",max);


	return 0;
}