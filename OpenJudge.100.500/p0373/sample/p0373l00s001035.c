#include <stdio.h>

int main(void){
	int H, W;
	int m, n;

	do{
	scanf("%d%d", &H, &W);
	if(H == 0 && W == 0) break;
	for(m = 0; m < H; m++){
		if(m == 0 || m + 1 == H){
		for(n = 0; n < W; n++){
			printf("#");
		}
		} else{
		printf("#");
		for(n = 1; n < W - 1; n++){
			printf(".");
		}
		printf("#");
		}

		printf("\n");
	}
	printf("\n");
	} while (H != 0 || W != 0);

	return 0;
}