#include <stdio.h>
int main(void){
	int H,N,A,i,total=0;
	
	scanf("%d %d",&H,&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&A);
		total += A;
	}
 
	if(H<=total){
		printf("Yes");
	}else{
		printf("No");
	}
	
	return 0;
}