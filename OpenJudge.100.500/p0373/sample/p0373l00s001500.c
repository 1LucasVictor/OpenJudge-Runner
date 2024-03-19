#include<stdio.h>
int main(void){
	int p,q,H,W;
	while(1){
		scanf ("%d %d",&H,&W);
		if (H == 0 && W == 0) break;
		for (p = 0; p < H; p++){
			for (q = 0; q < W; q++){
				if (p == 0 || p == H-1 || q == 0 || q == W-1){
					printf ("#");
				}
				else printf (".");
			}
			printf("\n");
		}
		printf ("\n");
	}
	return 0;
}