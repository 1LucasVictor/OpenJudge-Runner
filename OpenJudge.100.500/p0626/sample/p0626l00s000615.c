#include <stdio.h>

int main(void){
	//abc100-B
	
	int D,N,num;
	int a=1;

	scanf("%d",&D);
	scanf("%d",&N);
	
	if(D==0){
		num=100*D+N;
		printf("%d\n",num);
	}else{
		for(int i;i<D;i++){
			a*=100;
		}
		num=a*N;
		printf("%d\n",num);
	}
	return 0;
}