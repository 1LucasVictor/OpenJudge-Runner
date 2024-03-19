#include<stdio.h>

long sum;
long min;
long max;

int main(void)
{
	int n;
	int a[10000];
	int i;
	
	sum = 0;
	max = 0;
	min = 1000000;
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		scanf("%d", &a[i]);
		if(a[i] > max){
			max = a[i];
		}
		else if(a[i] < min){
			min = a[i];
		}
		sum += a[i];
	}
	
	printf("%ld %ld %ld\n", min, max, sum);
	
	return (0);
}