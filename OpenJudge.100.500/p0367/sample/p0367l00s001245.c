#include <stdio.h>
#include <stdlib.h>

// cl /EHsc xxxx.c
int main(int arc, char *argv[])
{
	int a, b, c;
	int i;
	int count = 0;

	scanf("%d %d %d", &a, &b, &c);
	
	for (i = a; i < b; i++) {
		if (c % i == 0) {
			count++;
		}
	}
	printf("%d\n", count);
	
	return 0;
}