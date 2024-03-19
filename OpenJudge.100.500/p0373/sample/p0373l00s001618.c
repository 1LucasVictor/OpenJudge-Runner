#include<stdio.h>
int main(void){
	int h,w,i,j,k;
	
	while(1){
		scanf("%d %d",&h,&w);
		if(h==0&&w==0){
			break;
		}
		for(i=0;i<w;i++){
			printf("#");
		}
		printf("\n");
		for(j=0;j<h-2;j++){
			printf("#");
			for(i=0;i<w-2;i++){
				printf(".");
			}
			printf("#\n");
		}
		for(i=0;i<w;i++){
			printf("#");
		}
		printf("\n\n");
		
	}
	return 0;
}