#include<stdio.h>
int main(void) {
	long long int a, b, lcm, ab, tmp;
	while (scanf("%lld %lld", &a, &b) != EOF)
	{
		ab = a*b;
		if (a < b) { tmp = a; a = b; b = tmp; }
		tmp = a%b;
		while (tmp != 0)
		{
			a = b; b = tmp; tmp = a%b;
		}
		lcm = ab / b;
		printf("%lld %lld\n", b, lcm);
	}
	return 0;
}