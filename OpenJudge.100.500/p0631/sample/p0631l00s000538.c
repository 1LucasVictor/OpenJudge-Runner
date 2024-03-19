#include<stdio.h>
#include<string.h>
int main(void) {
	int a, b, c,d;
	scanf("%d%d%d", &a, &b, &c);
	if (a <= c) {
		d = c - a;
		if (d <= b) { printf("YES\n"); }
		else printf("NO\n");
	}
	else printf("NO\n");
	return 0;
}