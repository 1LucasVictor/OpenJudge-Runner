#include <stdio.h>

int main(void){
	int S,h,m,s;
	scanf("%d", &S);
	h = S / (60 * 60);
	m = S % (60 * 60) / 60;
	s = S - h * 60 * 60 - m * 60;
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}
