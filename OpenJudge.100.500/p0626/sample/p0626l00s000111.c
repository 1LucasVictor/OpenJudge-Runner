#include <stdio.h>
#include <math.h>

int powInt(int a, int n) {
	if(n == 0) return 1;
	int i ;
	for(i = 1; i < n; i++) a *= a;
	return a;
}

int main() {

	int d, n;
	scanf("%d %d", &d, &n);
	int tmp = powInt(100, d);
	tmp *= n;
	printf("%d\n", tmp);

	return 0;
}
