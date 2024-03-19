#include <stdio.h>

int main(void)
{
	int i;
	int n;
	long int sum=100000;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		sum*=1.05;
		if(sum%1000) {
			sum/=1000;
			sum*=1000;
			sum+=1000;
		}
	}
	printf("%ld\n", sum);
	return 0;
}
