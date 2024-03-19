#include<stdio.h>
int main() {
	int a, b = 0;
	scanf("%d", &a);
	int c = 100;
	for (int i = 0; i < 3; i++) {
		if (a / c == 1) { 
			b++;
			a -= c;
		}
		c = c / 10;
	}
	printf("%d", b);
	return 0;
}