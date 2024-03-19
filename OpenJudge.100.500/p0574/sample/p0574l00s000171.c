#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) {
	char S[5];
	scanf("%s", &S);
	int count = 0;
	for (int i = 0; i < 4; i++) {
		if (S[i] == S[i + 1]) {
			count++;
		}
	}
	if (count == 0) {
		printf("Good");
	}
	else {
		printf("Bad");
	}


	return 0;

}