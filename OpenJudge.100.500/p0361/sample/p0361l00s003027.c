#include <stdio.h>

int main(void){
	int S;
	int s;
	int m = 0;
	int h = 0;

	scanf("%d", &S);
	while (S >= 60) {
		S -= 60;
		m++;
	}
	s = S;
	while (m >= 60) {
		m -= 60;
		h++;
	}

	printf("%d:%d:%d\n", h, m, s);

	return 0;
}