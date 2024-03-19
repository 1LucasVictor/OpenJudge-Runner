#include<stdio.h>

int main(){
	
	int A,B,C,D;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	
	
	if(D<=A||B<=C){
		printf("0");
		return 0;
	}else {
		if(C<A&&A<=D&&D<=B){
			printf("%d",D-A);
			return 0;
		}else if(C<A&&B<=D){
			printf("%d",B-A);
			return 0;
		}else if(A<=C&&D<=B){
			printf("%d",D-C);
			return 0;
		}else if(A<=C&&B<=D){
			printf("%d",B-C);
			return 0;
		}
	}
	
	
	
	return 0;
}