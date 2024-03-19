#include<stdio.h>
#include<string.h>

int main() {
	char inpStr[21];
	scanf("%s", inpStr);
	for (int i = strlen(inpStr) - 1; i >= 0; i--) {
		printf("%c", inpStr[i]);
	}
	printf("\n");
	return 0;
}

