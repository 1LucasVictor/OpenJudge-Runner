#include <stdio.h>

int main(void)
{
	int i,j,k,w,h;
	
	while(1){
		scanf("%d %d",&h,&w);
		if(h==0&&w==0) break;
		for(k=0;k<w;k++){
			printf("#");
		}
		printf("\n");
		for(i=1;i<h-1;i++){
			printf("#");
			for(j=1;j<w-1;j++){
				printf(".");
			}
			printf("#\n");
		}
		for(k=0;k<w;k++){
			printf("#");
		}
		printf("\n\n");
	}
	
	return 0;
}