#include<stdio.h>

int main(){
	int H,W,i,j;

	while(1){
		scanf("%d %d",&H,&W);
		if(H==0 &&W==0)
			break;
		for(i=0;i<H;i++){
		    if(i==0 || i==H-1){
                for(j=0;j<W;j++)
                    printf("#");
			}
			else{
                printf("#");
                for(j=1;j<W-1;j++)
                    printf(".");
                printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
return 0;
}