#include <stdio.h>

int main(void){
	int h,w,i,ii;
	while(1){
		scanf("%d %d",&h,&w);
		if(h==0&&w==0)break;
		for(i=0;i<h;i++){
			for(ii=0;ii<w;ii++){
				if(i==0||i==(h-1)||ii==0||ii==(w-1)){
					printf("#");
				}
				else{
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}