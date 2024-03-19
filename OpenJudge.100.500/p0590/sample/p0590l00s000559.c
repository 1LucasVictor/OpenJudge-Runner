#include <stdio.h>

int main(void) {
	int a, b, c, d, e, k;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e,&k);
	if (b - a <= k) {
		if (c - a <= k) {
			if (d - a <= k) {
				if (e - a <= k) {
					if (c - b <= k) {
						if (d - b <= k) {
							if (e - b <= k) {
								if (d - c <= k) {
									if (e - c <= k) {
										if (e - d <= k) {
											printf("Yay!\n");
											return 0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf(":(\n");
	return 0;
}