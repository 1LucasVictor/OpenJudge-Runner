#include <stdio.h>

int main(void) {
	long int a,b; scanf("%ld%ld",&a,&b);
	long int temp = a+b;
	if (temp % 2 == 0) {
		printf("%ld", temp/2);
	} else {
		printf("IMPOSSIBLE");
	}
	
	return 0;
}
