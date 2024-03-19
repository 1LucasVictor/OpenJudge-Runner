/* ITP1_5_B:Print a Frame */
/* 20181120 AOJ */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void){
	int H, W, i, j;

	while(1){
		scanf("%d %d", &H, &W);
		if(!H && !W) {
			break;
		} else {
			i = H;
			while(i--) {
				printf("#");
				for(j = 1; j < W - 1; j++) {
					if(i == 0 || i == H - 1){
						printf("#");
					} else {
						printf(".");
					}
				}
				printf("#\n");
			}
			printf("\n");
		}
	
	}
	return 0;
}
