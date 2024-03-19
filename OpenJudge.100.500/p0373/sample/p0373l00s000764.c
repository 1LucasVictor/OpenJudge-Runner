#include <stdio.h>

int main(void)
{
	int h,w,h2;
	int i,j,k;
	
	while(1){
		scanf("%d %d",&h,&w);
		
		if(h==0&&w==0) break;
		printf("\n");
		h2=h-2;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(i==0||i==h-1)printf("#");
				else{
					if(j==0||j==w-1)printf("#");
					else{printf(".");}
				}
			}


			printf("\n");
		}
	}
	return 0;
}