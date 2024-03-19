#include <stdio.h>

int main(void) {
	int i, p, h, w;
	while (h+w) {
		scanf("%d %d", &h, &w);
		if (h+w!=0) {
			for (i=0;i<h;i++) {
				for (p=0;p<w;p++) {
					if (i==0||i==h-1||p==0||p==w-1) printf("#");
					else printf(".");
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}