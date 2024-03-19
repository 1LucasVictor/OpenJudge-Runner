#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int A, B, T, i, k, s;
	scanf("%d%d%d", &A, & B, &T);
	i = 1;
	k = A;
	s = 0;
	while (k <= T) {
		i++;
		k = A * i;
		s = s + B;
	}
	printf("%d", s);
	return 0;
}