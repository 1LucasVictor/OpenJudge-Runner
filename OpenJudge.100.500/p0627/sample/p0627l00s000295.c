#include <stdio.h>
#include <math.h>
#define input_int(a) scanf("%d", &a);
#define input_char(a) scanf("%s", a);

int min(int a, int b) {
	if(a > b) return b;
	return a;
}

int max(int a, int b) {
	if(a > b) return a;
	return b;
}

int main() {
	int a, b;
	input_int(a);
	input_int(b);
	int ans = max(a + b, max(a - b, a * b));
	printf("%d\n", ans);
	//char buffer[128];
	//scanf("%s", buffer);
	return 0;
}
