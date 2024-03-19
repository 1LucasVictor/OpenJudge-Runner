#include<stdio.h>

int main() {
	int i, j, k;
	int	n, m, h, w, g, a, b, c, d;
	int f = 0;
	char s[2100000];


	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

	scanf("%s", s);


	for (i = 0;i < n-1;i++) {
		if (s[i] == '#') {
			if (s[i + 1] == '#') {
				if (i > a-1) {
					if (i < c) {
						f = 1;
					}
				}
				if (i > b-1) {
					if (i < d) {
						f = 1;
					}
				}
			}
		}
	}

	if (d < c&&f==0) {
		f = 1;
		for (i = b-1;i < n-2;i++) {
			if (i > d-3) {
				break;
			}
			if (s[i] == '.'&&i) {
				if (s[i + 1] == '.') {
					if (s[i + 2] == '.'&&i) {
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