#include <stdio.h>

#define NUM 3

int main()
{
	char s[NUM] = {};
	int count=0;

	for (int i=0; i<NUM; i++) {
		scanf("%c", &s[i]);
		if ('1' == s[i]) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}