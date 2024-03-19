#include <stdio.h>
int main(void){
	
	int H,W,i,j;
	
	while(1){
		scanf("%d %d", &H, &W);
		if(H==0 && W==0) break;
		else{
			for(i=1;i<=W;i++){
				printf("#");
			}
			printf("\n");
			for(j=1;j<=H-2;j++){
				printf("#");
				for(i=1;i<=W-2;i++){
					printf(".");
				}
				printf("#\n");
			}
			for(i=1;i<=W;i++){
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}