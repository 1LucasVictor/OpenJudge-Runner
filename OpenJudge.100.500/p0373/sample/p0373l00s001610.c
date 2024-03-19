#include <stdio.h>
int main(){
	int x, y, i, j;
	while(1){
		scanf("%d %d", &x, &y);
		if(x == 0 && y == 0)break;
		for(i = 0; i < x; i++){
			for(j = 0; j < y; j++){
				if(i == 0 || i == x - 1){
					for(j = 0; j < y; j++){
						printf("#");
					}printf("\n");
				}else if(j == 0){
					printf("#");
				}else if(j == y-1){
					printf("#\n");
				}else{
					printf(".");
				}
			}
		}printf ("\n");
	}
	return 0;
}