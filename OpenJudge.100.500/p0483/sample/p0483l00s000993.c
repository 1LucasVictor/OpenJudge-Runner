#include <stdio.h>
int main(void){
	int N,x,i;
	x=0;
	scanf("%d",&N);
	if((N>=700)&&(N<=800)){
		printf("Yes\n");
		x=1;
	}
	if(x==0){
		if((N+3)%10==0){
			printf("Yes\n");
			x=1;
		}
	}
	
	if(x==0){
		for(i=21;i<=30;i++){
			if((N+i)%100==0){
				printf("Yes\n");
				x=1;
			}
		}
	}
	if(x==0){
		printf("No\n");
	}
	
	return 0;
}
		
				