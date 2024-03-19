#include <stdio.h>

int main()
{
	char S[4];
	int J = 0;

	scanf("%s", &S);

	for (int i = 0; i < 3; ++i) {
		if (S[i] == S[i+1]) {
			J = 1;
			break;
		}
	}
	if (J == 1) printf("Bad");
	else printf("Good");	
}

	
