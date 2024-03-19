#include <stdio.h>

int main()
{
	char S[3];
	scanf("%s", &S);
	if (S[0] == S[1] && S[0] != S[2] && S[1] != S[2]){
		printf("Yes\n");
	}
	else if (S[0] == S[2] && S[0] != S[1] && S[2] != S[1]){
		printf("Yes\n");
	}
	else if (S[1] == S[2] && S[1] != S[0] && S[2] != S[0]){
		printf("Yes\n");
	}
	else if (S[0] == S[1] && S[0] == S[2] && S[1] == S[2]){
		printf("No\n");
	}
	return 0;
}