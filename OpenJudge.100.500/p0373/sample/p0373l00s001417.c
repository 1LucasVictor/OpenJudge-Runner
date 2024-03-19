#include<stdio.h>
int main(void){
	int W,H;
	int i,j;
	
	while(W!=0 || H!=0){
		scanf("%d%d",&H,&W);
		if(W==0 && H==0) break;
		for(i=0; i<H; i++){
			for(j=0; j<W; j++){if(i==0 ||i==H-1 || j==0 || j==W-1) printf("#"); else printf(".");}
			printf("\n");
		}
		printf("\n");
	}
return 0;
}