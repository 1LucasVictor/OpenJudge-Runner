#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int X;
	char buf[32], *ch;

	fgets(buf, sizeof(buf), stdin);
	ch = strtok(buf, " ");
	X = atoi(ch);

	if(X >= 30) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 0;
}
