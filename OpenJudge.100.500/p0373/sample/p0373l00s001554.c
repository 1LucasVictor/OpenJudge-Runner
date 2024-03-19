#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv) {
	int i, p, h, w;
	while (1) {
		scanf("%d %d", &h, &w);
		if (h+w==0) break;
		for (i=0;i<h;i++) {
			for (p=0;p<w;p++) {
				if (i==0||i==h-1||p==0||p==w-1) printf("#");
				else printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}