#include<stdio.h>
 
int main() {
	int i, j, k;
	int	n, m, h, w, g, a, b, c, d;
	int f = 0;
	char s[2100000];
 
 
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	
	scanf("%s", s);
 
 
	for (i = a;i < n;i++) {
		if (s[i] == '#') {
			if (s[i + 1] == '#') {
				if (i > a) {
					if (i < c) {
						f = 1;
					}
				}
				if (i > b) {
					if (i < d) {
						f = 1;
					}
				}
			}
		}
	}
 
	if (d < c) {
		f = 1;
		for (i = b;i < n;i++) {
			if (s[i] == '.'&&i!=d-1) {
				if (s[i + 1] == '.') {
					if (s[i + 2] == '.'&&i!=d-1) {
						f = 0;
						break;
					}
				}
			}
		}
	}
 
 
 
 
	if (f == 0) {
		printf("Yes");
	}
	else {
		printf("No");
	}
 
 
	return 0;
}