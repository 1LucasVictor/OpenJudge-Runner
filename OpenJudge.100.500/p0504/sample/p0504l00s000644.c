#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int H;
	int A;
	char buf[128], *ch;

	fgets(buf, sizeof(buf), stdin);
	ch = strtok(buf, " ");
	H = atoi(ch);
	ch = strtok(NULL, " ");
	A = atoi(ch);

	if(H % A == 0) {
		printf("%d\n", H / A);
	} else {
		printf("%d\n", H / A + 1);
	}

	return 0;
}
