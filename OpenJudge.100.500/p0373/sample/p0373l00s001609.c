#include <stdio.h>

int main(void){
	int height,width;
	while(1){
		int i,j;
		scanf("%d %d",&height,&width);
		if(!height&&!width) break;

		for(i=0;i<height;i++){
			for(j=0;j<width;j++){
				if(i==0||i==height-1||j==0||j==width-1) printf("#");
				else printf(".");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}