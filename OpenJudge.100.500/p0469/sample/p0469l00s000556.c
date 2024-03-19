#include<stdio.h>

int main() {
	int k, a, b, f = 0, g=0, i;
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	i = a;
	while(f == 0) {
		if (i%k == 0) {
			g++;
			f++;
		}
		else {
			if (i == b) {
				f++;
			}
			else {
				i++;
			}
		}
	}
	if (g == 1) {
		printf("OK");
	}
	else {
		printf("NG");
	}
}