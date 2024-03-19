#include <stdio.h>

int main(void){
	int H, W, i, j;

	do{
		scanf("%d %d", &H, &W);
		if(H == 0 && W == 0){
			
			break;
		
		}else{
			
			for(i = 0; H > i; i++){
				for(j = 0; W > j; j++){

					if(i == 0 || i == (H-1) || j == 0 || j == (W-1)){
						printf("#");
					}else{
						printf(".");
					}

				}
				printf("\n");
			}
			
			printf("\n");

		}
	
	}while(H != 0 && W != 0);
	
	return(0);

}