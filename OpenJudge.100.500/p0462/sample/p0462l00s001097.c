#include <stdio.h>

int main(void) {
	long long A;
	float B;
	int t;
	
	scanf("%lld", &A);
	scanf("%f", &B);
	
	t = (int)(B * 100);
	
	printf("%lld\n", (long long)((A * t)/ 100));
	
	return 0;
}
