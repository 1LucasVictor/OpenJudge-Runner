#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define PI 3.14159265358979323846


int main(void) {
	char S[5];
	scanf("%s", S);

	if ((S[0] == S[1] && S[2] == S[3] && S[0] != S[2]) || (S[0] == S[2] && S[1] == S[3] && S[0] != S[1]) || (S[0] == S[3] && S[1] == S[2
	] && S[0] != S[1])) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	



	return 0;
}
