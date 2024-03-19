#include <stdio.h>

int main(void){
	for(;;){
		int h, w, i, j;

		scanf("%d %d", &h, &w);
		if(h == 0 && w == 0)
			break;

		for(i = 0; i < h; i++){
			for(j = 0; j < w; j++)
				putchar(i%(h-1) && j%(w-1) ? '.' : '#');
			putchar('\n');
		}
		putchar('\n');
	}
}

