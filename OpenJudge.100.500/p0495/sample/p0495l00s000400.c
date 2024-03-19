// ABC 158-A
// 2020.3.7 bal4u

#include <stdio.h>

int main()
{
	int i, A, B;
	char S[5];

	A = B = 0;
	scanf("%s", S);
	for (i = 0; i < 3; ++i) {
		if (S[i] == 'A') A++;
		else B++;
	}
	puts((A && B)? "Yes": "No");
	return 0;
}
