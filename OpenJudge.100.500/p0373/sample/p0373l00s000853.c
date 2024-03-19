#include <stdio.h>   
int main() {

	int i,j,H,W;

	for(;;){

		scanf("%d%d",&H,&W);

		if(H==0,W==0)break;

		for(j=0;j<H;j++){
			for(i=0;i<W;i++){

				if(i==0||j==0||j==(H-1)||i==(W-1))printf("#");

				else printf(".");

			}

			printf("\n");

		}

		printf("\n");

	}

	return 0;

}