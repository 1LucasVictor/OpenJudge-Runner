#include<stdio.h>
#include<string.h>

int main(void) {
	int a, b;
	char ch[16];

	while (scanf("%d %d",&a,&b) != EOF) {
		sprintf(ch, "%d", a + b);
		printf("%d", strlen(ch));
	}

	return 0;
}