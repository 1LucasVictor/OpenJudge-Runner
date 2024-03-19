#include <stdio.h>

int main(void) {
  int H , W,i,j,k;

  while(1){
    scanf("%d %d",&H,&W);
    if(H == 0 && W == 0) {
      break;
    }
		for(i=0;i<W;i++){
			printf("#");
		}
		printf("\n");
		for(j=0;j<H-2;j++){
			printf("#");
			for(i=0;i<W-2;i++){
					printf(".");
			}
			printf("#");
			printf("\n");
		}
		for(i=0;i<W;i++){
			printf("#");
		}
		printf("\n\n");
	}
	return 0;
}
