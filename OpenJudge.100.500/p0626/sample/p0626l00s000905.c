#include <stdio.h>

int main(){

	int D,N;
	scanf("%d %d",&D,&N);

	int i;

	if(D==0){
		if(N==100){
			printf("101\n");
		}
		else{
			printf("%d\n",N);
		}
	}
	else if(D==1){
		if(N==100){
			printf("10100\n");
		}
		else{
			printf("%d\n",N*100);
		}
	}
	else{
		if(N==100){
			printf("1010000\n");
		}
		else{
			printf("%d\n",N*100*100);
		}
	}

	return 0;
}