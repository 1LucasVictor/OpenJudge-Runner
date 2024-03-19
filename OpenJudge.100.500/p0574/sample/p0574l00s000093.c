#include<stdio.h>

int main(void) {
	char S[4];
	int c=0;
	scanf("%s", S);
	for (int i = 0; i < 4; i++) {
		if (S[i] == S[i + 1]&&c==0) {
			printf("Bad\n");
			c = 1;
		}
	}
	if (c == 0) {
		printf("Good\n");
	}
	return 0;
}