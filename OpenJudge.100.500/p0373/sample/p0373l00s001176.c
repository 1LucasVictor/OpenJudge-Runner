#include<stdio.h>
int main(void){
	int h, w, i, j;
	do{
		scanf("%d %d", &h, &w);
		if(h == 0 && w == 0){
			break;
		}
		for(i = 1; i <= h; i++){
			if(i == 1 || i == h){
					for(j = 1; j <= w; j++){
						printf("#");
					}
			}else{
				for(j = 1; j <= w; j++){
					if(j == 1 || j == w){
						printf("#");
					}else{
						printf(".");
					}
				}
			}
			printf("\n");
		}
		printf("\n");
	}while(1);
	
	return 0;
}

