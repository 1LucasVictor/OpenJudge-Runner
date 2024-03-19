#include <stdio.h>

int main(void) {
	int H, W, i, j;
	while(1){
	scanf("%d %d", &H, &W);
	if(H == 0 && W == 0) break;
	for(i=0; i<H-1; i++){
		for(j=0; j<W; j++){
			if(i*j == 0 || j+1 == W)
				putchar('#');
			else putchar('.');
		}
		putchar('\n');
	}
	for(i=0; i<W; i++) putchar('#');
	putchar('\n');
	}
	return 0;
}
