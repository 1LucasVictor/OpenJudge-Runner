#include <stdio.h>

int main () {
	char S[5];
	scanf ("%s", S);
	int flag = 0;
	if (S[0]==S[1] && S[1]!=S[2] && S[2]==S[3])
		flag = 1;
	else if (S[0]==S[2] && S[1]==S[3] && S[0]!=S[1])
		flag = 1;
	else if (S[0]==S[3] && S[1]==S[2] && S[0]!=S[1])
		flag = 1;
	printf ("%s\n", flag?"Yes":"No");
	return 0;
}