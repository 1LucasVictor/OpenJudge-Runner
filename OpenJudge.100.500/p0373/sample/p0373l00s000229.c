#include<stdio.h>
int main(){
	
	while(1){
	
		int H , W , counth , countw;
		
		scanf("%d %d", &H , &W);
		
		if(H == 0 && W == 0){
		
			break;
		}
		
		for(counth = 0 ; counth < H  ; counth++){
			
			if(counth == 0 || counth == H - 1){
				for(countw = 0 ; countw <= W - 1  ; countw++){
					printf("#");
				}
			}
			
			else {
				for(countw = 0 ; countw <= W - 1  ; countw++){
				
				if(countw == 0 || countw == W-1){
					
					printf("#");
				}
				
				else {
					printf(".");
				}
			
				}
			}
			printf("\n");
		}
		
		printf("\n");
	
	}
	return 0;
}

//?¨????????????????????¢???????????????¨??????()??????
// int ??´??°
// char ??????
// double ???????°???°???
/*d = a / b;
r = a % b;
f = 1.0 * a / b;
// f = (double)a / b;*/