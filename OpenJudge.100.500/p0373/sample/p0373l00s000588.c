#include <stdio.h>
void bottom(int W);
int main(){
	int H, W;
	int i,j;
	while (1) {
		scanf("%d %d", &H, &W);
		if (H == 0 && W == 0) break;
		bottom(W);
		printf("\n");
		for (i = 0;i < H-2;i++) {
			for (j = 0;j < W;j++) {
				if (j == 0 || j == W-1) {
					printf("#");
				}else {
					printf(".");
				}
			}
			printf("\n");
		}
		bottom(W);
		printf("\n\n");
	}

	return 0;
}
void bottom(int W) {
	int i;
	for (i = 0;i < W;i++) {
		printf("#");
	}
}
