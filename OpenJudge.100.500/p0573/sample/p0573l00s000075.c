#include <stdio.h>

int main()
{
	char S[4];
	int J = 0;

	scanf("%s", &S);

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (S[i] == S[j] && i != j) ++J;
		}
	}

	if (J == 4) printf("Yes");
	else printf("No");
}
