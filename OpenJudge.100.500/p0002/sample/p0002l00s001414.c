#include <stdio.h>

int func1(int a, int b, int c) {
	int temp;

	if(a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if(b > c) {
		temp = b;
		b = c;
		c = temp;
	}

	if(a*a + b*b == c*c) return 1;
	else return 0;
}

int main() {
	int a, b, c;
	int n, i;

	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if(func1(a, b, c)) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}