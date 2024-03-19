#include <stdio.h>

int main(void){
	unsigned S, h, m, s;

	scanf("%u", &S);
	h = S/60/60;
	m = S/60 - h*60;
	s = S % 60;
	printf("%u:%u:%u\n", h, m, s);

	return 0;
}

