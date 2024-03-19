#include <stdio.h>

int main(void) {
	int H, W, k, l;
	
	while(1){
		scanf("%d %d", &H, &W);
		
		if(H==0 && W==0) break;
		
		for(l=0;l<H;l++){
			
			if(l==0 || l==(H-1)){
			for(k=0;k<W;k++) printf("#");
			}
			else {
				printf("#");
				for(k=0;k<(W-2);k++) printf(".");
				printf("#");
				
			}
		
		printf("\n");
		}
		
		printf("\n");
		
	}
	
	return 0;
}