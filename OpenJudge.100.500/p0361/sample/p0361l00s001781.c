
#include <stdio.h>
int main(void) {
	
	int S;
	int h, m, s;

	scanf("%d", &S);

	h = S / 3600;
	m = (S - 3600*h)/60;
	s = S - (3600 * h + 60 * m);

	printf("%d:%d:%d\n",h,m,s);

	
	return(0);

}
