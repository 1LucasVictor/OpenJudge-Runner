#include<stdio.h>
#include<math.h>

int main() {
	int i, j, k;
	int	n, m, h, g, a, b, c, d, l, r;
	int f = 2020;
	int w;

	scanf("%d %d", &l, &r);

	if (r < 2019) {
		f = l * (l + 1);
		goto end;
	}
	if (r - l > 2018) {
		f = 0;
		goto end;
	}

	for (i = l;i < r;i++) {
		w = i % 2019;
		if (w == 0) {
			f = 0;
			goto end;
		}
		for (j = i + 1;j < r + 1;j++) {
			h = j % 2019;
			if (h == 0) {
				f = 0;
				goto end;
			}
			g = (w*h) % 2019;
			if (g == 0) {
				f = 0;
				goto end;
			}
			if (g < f) {
				f = g;
			}
		}
	}

	end:

	printf("%d", f);


	return 0;
}