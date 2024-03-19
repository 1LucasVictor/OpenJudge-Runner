#include<stdio.h>

int main(void) {
	int k, h, t, o, s;
	scanf("%d", &s);

	k = s / 1000;
	h = abs((k * 10) - (s / 100));
	t = abs(((k * 100) + (h * 10)) - (s / 10));
	o = s % 10;

	if (k == h) {
		printf("Bad");
	}
	else if(h == t)
		printf("Bad");
	else if(t==o)
		printf("Bad");
	else
		printf("Good");

	return 0;
}