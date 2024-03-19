#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int total = 0;
	
	sum1 = n;
	sum2 = n*n;
	sum3 = n*n*n;
	total  = sum1 + sum2 + sum3;
	printf("%d", total);
	return 0;
}