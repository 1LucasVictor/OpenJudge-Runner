#include <stdio.h>

int main(void) {
	int x, y, i, j;
	
	while(1){
		scanf("%d %d", &x, &y);
		
		if(x == 0 && y == 0){
			break;
		}
		for(i = 0; i < x; i++){
			if(i == 0 || i == x - 1){
				for( j = 0; j < y; j++){
					putchar('#');
				}
				putchar('\n');
			}else if( i > 0 && i < x - 1){
				for(j = 0; j < y; j++){
					if( j == 0){
						putchar('#');
					}else if( j == y - 1){
						putchar('#');
						putchar('\n');
					
					}else if( j > 0 && j < y -1){
						putchar('.');
					}
				}
			}	
		}
		putchar('\n');
		
	}
	
	return 0;
}