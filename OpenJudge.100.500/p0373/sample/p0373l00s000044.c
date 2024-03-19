#include <stdio.h>
int main(){
	int H,W,i,k;
	for(;;){
		scanf("%d %d",&H,&W);
		if(H==0 && W==0)break;
		for(i=1;i<=H;i++){
			if(i==1 || i==H){
				for(k=1;k<=W;k++){
					printf("#");
				}
			}else{
				for(k=1;k<=W;k++){
					if(k==1 || k==W){
						printf("#");
					}else{
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