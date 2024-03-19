#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int i;
	int x, a, b;
	char buf[128], *ch;

	fgets(buf, sizeof(buf), stdin);
	ch = strtok(buf, " ");
	x = atoi(ch);
	ch = strtok(NULL, " ");
	a = atoi(ch);
	ch = strtok(NULL, " ");
	b = atoi(ch);

	if(a >= b) {
		printf("delicious\n");
	} else if(a + x >= b) {
		printf("safe\n");
	} else {
		printf("dangerous\n");
	}


	return 0;
}
