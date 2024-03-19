#include<stdio.h>
int main() {
	int H,W,i,a;
	while(1) {
		scanf("%d %d",&H,&W);
		if(H==0 && W==0) break;
		if(3 <= H && H <=300 && 3 <= W && W <= 300) {
			for(i=0;i<H;i++) {
				printf("#");
				for(a=1;a<W-1;a++) {
					if(i==0 || i==H-1) {
						printf("#");
					} else if(i!=0 && i!=H-1) {
						printf(".");
					}
				}
				printf("#");
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}