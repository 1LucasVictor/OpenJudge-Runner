#include <stdio.h>

int main(void)
{
	int H, W, x, y, i;
	
	for(i = 0; i < 300; i++){
		scanf("%d%d", &H, &W);
		if((H == 0) && (W == 0)) break;
		for(y = 1; y <= H; y++){
			for(x = 1; x <= W; x++){
				if((y == 1) || (y == H)){
					printf("#");
				}else{
					if((x == 1) || (x == W)){
						printf("#");
					}else{
						printf(".");
					}
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return(0);
}

