#include <stdio.h>

int main() {
	int n, a, b, c, d, e, k;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &k);

	if (k >= b - a)
		if (k >= c - a)
			if (k >= d - a)
				if (k >= e - a)
					if (k >= c - b)
						if (k >= d - b)
							if (k >= e - b)
								if (k >= d - c)
									if (k >= e - c)
										if (k >= e - d) {
											printf("Yay!\n");
											return 0;
										}
	printf(":(\n");

	return 0;
}