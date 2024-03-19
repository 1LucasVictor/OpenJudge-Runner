#include<stdio.h>

int main(){
	int H=0;
	int W=0;

	do{
		scanf("%d %d",&H,&W);
		if(H*W==0)break;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if((i%(H-1)!=0)&&(j%(W-1)!=0)){
					printf(".");
				}
				else{
					printf("#");
				}
			}
			puts("");
		}
		puts("");
	}while(H*W!=0);

	return 0;
}

