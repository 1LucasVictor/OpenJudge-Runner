#include <stdio.h>
#include <string.h>


int main(void) {
	
	int a, b, c,i,count=0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b) printf("0");
	for (i = a; i < b; i++) {
		if (c%i == 0) count++;
	}

	printf("%d\n", count);

	return 0;
}