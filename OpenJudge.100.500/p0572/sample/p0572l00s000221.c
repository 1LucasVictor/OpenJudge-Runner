#include <stdio.h>
int main() {
	unsigned l, r, s;
	scanf("%u%u", &l, &r);
	if (r - l >= 2019)s = 0;
	else s = ((l % 2019) * ( (l + 1) % 2019 )) % 2019;
	printf("%u", s);
	return 0;
}