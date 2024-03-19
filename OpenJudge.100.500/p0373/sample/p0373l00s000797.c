#include <stdio.h>

int main(void)
{
	int H;
	int W;
	int a;
	int b;
	int c;
	int d;
	
	for(;;){
		if(H == 0 && W == 0){
			break;
		}
		scanf("%d %d", &H, &W);
		for (a = 1; a <= W; a++){
			printf("#");
		}
		printf("\n");
		for (b = 1; b <= (H-2); b++){
			printf("#");
			for(c = 1; c <= (W-2); c++){
				printf(".");
			}
			printf("#");
				printf("\n");
			}
		for (d = 1; d <= W; d++){
			printf("#");
		}
		printf("\n");
		}
		
		return (0);
	}