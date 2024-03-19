#include <stdio.h>

int main(void)
{
	
	int h, w, x, y;
	
	while ((h != 0)||(w != 0)){
		
		scanf("%d %d", &h, &w);
		
		if ((h != 0)||(w != 0)){
			
			for (x = 0; x < h; ++x){
				
				for (y = 0; y < w; ++y){
					
					if ((x == 0) || (x == h - 1)){
						printf("#");
					}
					
					else if ((y == 0) || (y == w - 1)){
						printf("#");
						
					}
					
					else {
						printf(".");
					}
				
					
				}
				
				printf("\n");
				
			}
			
			printf("\n");
			
		}
		
	
	}
	
	return 0;
}