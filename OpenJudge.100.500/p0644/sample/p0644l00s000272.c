#include <stdio.h>

int main(void) {
	char string[3];
	int i,count = 0;
	scanf("%s",string);
	for (i = 0; i < 3; i++) {
		if (string[i] == '1')
			count += 1;
	}
	printf("%d\n", count);

}