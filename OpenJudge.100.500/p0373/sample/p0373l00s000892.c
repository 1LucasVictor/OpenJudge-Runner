#include <stdio.h>

int main(){
	int w,h;
	int i,j,k;

	while(1){
		scanf("%d %d",&h,&w);
		if(h == 0 && w == 0) break;

		for(i = 0;i < w;i++){
			printf("#");
		}
		printf("\n");
		
		for(i = 0;i < h - 2;i++){
			printf("#");
			for(j = 0;j < w - 2;j++){
				printf(".");
			}
			printf("#\n");
		}
		
		if(h - 1 > 0){
			for(i = 0; i < w;i++){
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}