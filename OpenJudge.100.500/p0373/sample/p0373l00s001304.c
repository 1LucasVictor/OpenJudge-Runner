// 1_5_B
#include<stdio.h>

int main(void)
{
	int height, width, H, W;
	while(1){
		scanf("%d %d", &H, &W);
		if(H == 0 && W == 0){
			break;
		}

		for(height = 0; height < H; height++){
			for(width = 0; width < W; width++){
				if(height == 0 || height == H-1 || width == 0 || width == W-1){
					printf("#");
				}else{
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}