#include <stdio.h>

int main(void) {
	int H,W,i,t;
	while(1){
		scanf("%d %d",&H,&W);
		if(H==0&&W==0){
			break;
		}
		for(i=1;i<=W;i++){
			printf("#");
		}
		printf("\n");
		for(i=2;i<=H-1;i++){
			printf("#");
			for(t=2;t<=W-1;t++){
				printf(".");
			}
			printf("#\n");
		}
		for(i=1;i<=W;i++){
			printf("#");
		}
		printf("\n\n");
	}
	return 0;
}