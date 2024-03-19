#include<stdio.h>

int main(void)
{
	int i,j,h,w;
	scanf("%d %d",&h,&w);
	while((h != 0) || (w != 0)){
		for(i=0;i<h;i++){
			if((i == 0) || (i == h-1)){
				for(j=0;j<w;j++){
					printf("#");
				}
				printf("\n");
			}else{
				for(j=0;j<w;j++){
					if((j == 0) || (j == w-1)){
						printf("#");
					} else{
						printf(".");
					}
				}
				printf("\n");
			}
		}
		printf("\n");
		scanf("%d %d",&h,&w);
	}
		
	return 0;
}