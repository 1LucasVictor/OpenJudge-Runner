#include <stdio.h>


int main() {

	
	int i;
	char S[4];

	scanf("%s", S);

	if (S[0] == S[1]) {
		if (S[2] == S[3] && S[0] != S[2]) {
			printf("Yes\n");
			return 0;
		}
		else {
			printf("No\n");
			return 0;
		}
	}
	else if (S[0] == S[2]) {
		if (S[1] == S[3] && S[0] != S[1]) {
			printf("Yes\n");
			return 0;
		}
		else {
			printf("No\n");
			return 0;
		}
	}
	else if (S[0] == S[3]) {
		if (S[1] == S[2] && S[0] != S[1]) {
			printf("Yes\n");
			return 0;
		}
		else {
			printf("No\n");
			return 0;
		}
	}
	else {
		printf("No\n");
		return 0;
	}

	return 0;
}