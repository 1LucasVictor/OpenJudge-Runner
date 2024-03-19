#include<stdio.h>
int main(void){
	int H, W;
	int i, j;
	while(1){
		scanf("%d %d", &H, &W);
		if(H == 0 && W == 0){
			break;
		}
		for(i = 0; i < H; i++){
			for(j = 0; j < W; j++){
				if(i == 0 || i == (H - 1)){
					if(j == (W - 1)){
						printf("#\n");
					}else{
						printf("#");
					}
				}else{
					if(j == 0){
						printf("#");
					}else if(j == (W - 1)){
						printf("#\n");
					}else{
						printf(".");
					}
				}
			}
		}
	}
	return 0;
}