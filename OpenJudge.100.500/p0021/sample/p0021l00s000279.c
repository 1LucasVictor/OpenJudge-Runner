#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j;
	int *a;
	long long int sum,max;

	while(1){
		scanf("%d",&n);
		if(n == 0){
			break;
		}

		a = (int *)malloc(sizeof(a)*n);

		for(i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}

		max	= -100000;
		for(i = 0;i < n;i++){
			sum = a[i];
			for(j = i+1;j < n;j++){
				sum += a[j];
				if(max < sum){
					max = sum;
				}
			}
		}
		printf("%d\n",max);
	}

	return 0;
}