#include <stdio.h>
int main(){
	int H[100]={1},W[100]={1},s,t,a;
	//??\???
	for(a=0;H[a]!=0 && W[a]!=0 && a<100-1;a++){
		do{
			printf("");
			scanf("%d %d",&H[a+1],&W[a+1]);
		}while(!(H[a+1]>=0 && H[a+1]<=100 && W[a+1]>=0 && W[a+1]<=100));
	}
	
	//??????
	for(a=1;W[a]!=0 && H[a]!=0;a++){
		for(s=1;s<=H[a];s++){
			for(t=1;t<=W[a];t++){
				if((t==1 || t==W[a]) || (s==1 || s==H[a])){
					printf("#");
				}else{
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}