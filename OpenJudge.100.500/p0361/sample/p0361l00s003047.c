#include <stdio.h>

int main(){

	int S;
	int h,m,s;

	scanf("%d", &S);

	h = S / (60*60);
	m = (S % (60*60)) / 60;
	s = S % 60;

	printf("%d:%d:%d\n", h, m, s);

	return 0;
}