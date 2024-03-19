#include <stdio.h>

int main(void){
	int t, h = 0, m = 0, s = 0;
	scanf("%d", &t);
	h = t / 3600;
	m = t / 60 % h;
	s = t % (h * 60 + m);
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}