#include<stdio.h>
int main(void){
	int H,W,k,i;
	while(1){
		scanf("%d %d",&H,&W);
		if(H==0&&W==0){
			break;
		}
		else if((H+W)==1||(H==1&&W==1)){
			printf("#\n");
		}
		else{
			if(H==0){
				H++;
			}
			if(W==0){
				W++;
			}
			for(k=1;k<=H;k++){
				for(i=1;i<=W;i++){
					if(W==1||W==i){
						printf("#\n");
					}
					else if(i==1){
						printf("#");
					}
					else{
						if(k==1||k==H){
							printf("#");
						}
						else{
							printf(".");
						}
					}
				}
			}
		}
	printf("\n");
	}
return 0;
}