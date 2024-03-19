// ABC 155-B
// 2020.2.16 bal4u

#include <stdio.h>

int main()
{
	int N, A;

	scanf("%d", &N);
	while (N--) {
		scanf("%d", &A);
		if (A & 1) continue;
		if (A % 3 && A % 5) {
			puts("DENIED");
			return 0;
		}
	}
	puts("APPROVED");
	return 0;
}
