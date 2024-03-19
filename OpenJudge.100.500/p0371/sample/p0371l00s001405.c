#include <stdio.h>

int main(){
	int i;
	int a[1000];
	int n;
	int max,min,sum;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
		scanf("%d", &a[i]);
	sum = 0;
	max = -1000000;
	min = 1000000;
	for(i = 0;i < n;i++){
		sum += a[i];
		if(a[i] > max)max = a[i];
		if(a[i] < min)min = a[i];
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}