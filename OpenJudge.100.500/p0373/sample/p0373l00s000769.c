#include <stdio.h>

int main(void){
	int H,W,i,j;

	while(1){
		scanf("%d %d",&H,&W);
		
		if(H==0 && W==0){
		break;
		}else{
			for(i=0;i<H;i++){
				for(j=0;j<W;j++){
					if(i+1!=H && j+1!=W &&i!=0 && j!=0){
						printf(".");
					}else{
						printf("#");
					}
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}

