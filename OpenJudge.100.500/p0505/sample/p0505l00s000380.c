#include <stdio.h>
int main(void){
	int H,N,A,i,sum=0;
	
	scanf("%d %d",&H,&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&A);
		sum = sum + A;
	}

	if(H<=sum){
		printf("Yes");
	}else{
		printf("No");
	}
	
	return 0;
}