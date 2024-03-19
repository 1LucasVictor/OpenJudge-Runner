#include<stdio.h>

main() {
	int H[1000], W[1000],i,kkn=0,j,k;
	for (i = 0;i < 10000;i++) {
		scanf("%d %d", &H[i], &W[i]);
		if (H[i] == 0 && W[i] == 0) break;
		kkn++;

	}
	for (i = 0;i < kkn;i++) {
		for (j = 0;j < H[i];j++) {
			if (j == 0 || j+1== H[i]) {
				for (k = 0;k < W[i];k++) {
					putchar('#');
				}
			}
			else {
				putchar('#');
				for (k = 1;k +1< W[i];k++) {
					putchar('.');

				}
				putchar('#');
			}
				putchar('\n');
			}
		
		
		printf("\n");
		
	}
}
