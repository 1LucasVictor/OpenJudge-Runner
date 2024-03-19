#include <stdio.h>
int main() {
	char C[3];
	scanf("%s", C);

	if (C[0] == C[1] && C[0] == C[2]) {
		printf("No");
	}
	else {
		printf("Yes");
	}
	return 0;
}