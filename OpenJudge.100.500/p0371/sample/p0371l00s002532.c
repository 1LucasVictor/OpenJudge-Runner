#include<stdio.h>
#include<stdlib.h>

int main(void){
	int n,i;
	long int *a,max,min,sum;
	
	scanf("%d",&n);
	a = (long int*)malloc(sizeof(long int)*n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	max = min = sum = a[0];
	for(i=1; i<n; i++){
		if(max < a[i])max = a[i];
		else if(min > a[i])min = a[i];
		sum += a[i];
	}
	printf("%d %d %d\n", min, max, sum);
	
	free(a);
	
	return 0;
}