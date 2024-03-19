#include <stdio.h>
long int GCD(long int A, long int B) {
	if (B == 0) return A;
	return GCD(B, A % B);
}

int main() {
	int long x, y;
	scanf("%ld %ld", &x, &y);

	printf("%ld\n", GCD(x,y));

	return 0;
}
