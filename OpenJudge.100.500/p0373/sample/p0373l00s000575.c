#include <stdio.h>

int main(void){
	int h, w;
	int i, j;

	while(1){
		scanf("%d", &h);
		scanf("%d", &w);
		if(h == 0 && w == 0){
			break;
		}
		
		for(i = 0; i < h - 2; i++){
			if(i == 0){
				for(j = 0; j < w; j++){
					printf("#");
				}
				printf("\n");
			}


			if(i != 0 || i != h - 1){
				printf("#");
				for(j = 1; j < w - 1; j++){ 
					printf(".");
				}
				printf("#");
				printf("\n");
			}

			if(i == h - 3){
				for(int j = 0; j < w; j++){
					printf("#");
				}
			}
		}
		
		printf("\n");
		printf("\n");
	}

	return 0;
}