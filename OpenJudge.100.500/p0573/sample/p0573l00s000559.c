#include <stdio.h>

int main() {
	char S[4];
	scanf("%s", S);
	if (S[0] == S[1]) {
		if(S[0] != S[2] && S[2] == S[3]) printf("Yes\n");
		else printf("No\n");
	} else if (S[0] == S[2]) {
		if(S[0] != S[1] && S[1] == S[3]) printf("Yes\n");
		else printf("No\n");
	} else if (S[0] == S[3]) {
		if(S[0] != S[1] && S[1] == S[2]) printf("Yes\n");
		else printf("No\n");
	} else printf("No\n");
	return 0;
}

