#include<stdio.h>

int main(void){
	int K,A,B,comp;
	
	scanf("%d",&K);
	scanf("%d %d",&A,&B);
	
	int worst = A/K;
	int best = B/K;
	
	while(1){
		comp = K*worst;
		if(A <= comp && comp <= B){
			printf("OK\n");
			break;
		}else if(comp < A){
			worst++;
		}else{
			printf("NG\n");
			break;
		}
	}
	
	
	return 0;
}