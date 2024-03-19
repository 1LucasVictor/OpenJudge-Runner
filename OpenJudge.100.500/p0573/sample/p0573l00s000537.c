#include <stdio.h>
int main() {
	char S[4];
	scanf("%s", S);
	int k = 0;
	for(int i = 1; i < 4; i++) {
		if(S[0] == S[i]) k++;
	}
	if(k < 2) {
		for(int i = 0; i < 3; i++) {
			if(S[i] == S[i + 1]) {
				if(i < 2 && S[i] != S[i + 2]) printf("Yes");
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}
