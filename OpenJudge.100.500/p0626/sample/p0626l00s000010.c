#include <stdio.h>
#include <math.h>
int main() {
	int d,n;
	scanf("%d %d", &d, &n);
	if (n == 100) { n = 101 * pow(10, 2 * d); printf("%d", n); }
	else{n = n * pow(10, 2 * d);printf("%d\n", n);}
}