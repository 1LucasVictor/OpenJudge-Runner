#include<stdio.h>

int main(void)
{
	int S;
	int h=0, s=0, m=0;
	scanf("%d", &S);
	h = S / (60 * 60);
	S -= (h * 60*60);
	m = S / 60;
	S -= m * 60;
	s = S;
	printf("%d:%d:%d\n", h, m, s);
	return 0;

}
