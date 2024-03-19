#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include<string.h>

int main() {
	char com[8];
	char input[10];
	int a;
	scanf("%s",input);
	//printf("%c",input[0]);
	a = input[0];
		int i;
	for (i = 0; i < 3; i++) {
		if (a != input[i]) {
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	
}