#include<stdio.h>
int main(){
	int i,j,h,w;
	while(1){
		scanf("%d%d",&h,&w);
		if(h==0&&w==0)break;
		/* line 1*/
		for(i=0;i<w;i++){
			printf("#");
		}
		printf("\n");
		/* line 2-(h-1)*/
		for(j=1;j<h-1;j++){
			printf("#");
			for(i=1;i<w-1;i++){
				printf(".");
			}
			printf("#\n");
		}
		/* line h*/
		for(i=0;i<w;i++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}