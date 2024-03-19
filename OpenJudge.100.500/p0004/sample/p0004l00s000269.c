#include <stdio.h>

int gcd(int a, int b);
int max(int a, int b);

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) printf("%d %d\n", gcd(a, b), a * (b / gcd(a, b)));
	return 0;
}

int gcd(int a, int b)
{
	int i;
	if(a < b) b %= a;
	else if(a > b) a %= b;
	else return max(a, b);
	for(i = max(a, b);i > 0;i--) {
		if(!(a % i) && !(b % i)) return i;
	}
	return 0;
}

int max(int a, int b)
{
	if(a >= b) return a;
	else return b;
}