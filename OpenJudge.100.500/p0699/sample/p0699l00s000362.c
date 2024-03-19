#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int a, b, c;
	char buf[128], *ch;

	fgets(buf, sizeof(buf), stdin);
	ch = strtok(buf, " ");
	a = atoi(ch);
	ch = strtok(NULL, " ");
	b = atoi(ch);
	ch = strtok(NULL, " ");
	c = atoi(ch);

	if(a == 5 && b == 5 && c == 7) {
		printf("YES\n");
	} else if (a == 5 && b == 7 && c == 5) {
		printf("YES\n");
	} else if (a == 7 && b == 5 && c == 5) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}
