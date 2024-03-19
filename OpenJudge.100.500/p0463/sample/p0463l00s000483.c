
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int N;
	scanf("%d", &N);
	while (1) {
		if (N >= 0 && N <= 10) {
			break;
		}
		N = N - 10;
	}
	if (N == 2 || N == 4 || N == 5 || N == 7 || N == 9)printf("hon");
	else if (N == 3)printf("bon");
	else printf("pon");
	return 0;
}
