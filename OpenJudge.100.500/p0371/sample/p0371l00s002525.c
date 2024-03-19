#include <stdio.h>

int main(){
	int i;
	long a[10000];
	long n;
	long max,min,sum;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
		scanf("%d", &a[i]);
	sum = 0;
	max = -10000000;
	min = 10000000;
	for(i = 0;i < n;i++){
		sum += a[i];
		if(a[i] > max)max = a[i];
		if(a[i] < min)min = a[i];
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}