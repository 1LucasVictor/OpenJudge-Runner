#include <stdio.h>

int main(void){
	int h, w, i, j;
	while(1){
		scanf("%d %d", &h, &w);
		if (h == 0 && w == 0) break;
		for (i = 0; i < w; i++) printf("#");
		for (j = 1; j < h-1; j++){
			printf("\n#");
			for (i = 1; i < w-1; i++) printf(".");
			printf("#");
		}
		printf("\n");
		for (i = 0; i < w; i++) printf("#");
		printf("\n\n");
	}
	return 0;
}