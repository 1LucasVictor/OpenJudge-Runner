#include<stdio.h>

int main(){
	
	int A,B,C,D;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	
	if(A<C){
		if(B<C){
			printf("0");
		}else {
			if(B<D){
				printf("%d",B-C);
			}else {
				printf("%d",D-C);
			}
		}
	}else {
		if(D<A){
			printf("0");
		}else {
			if(A<C){
				printf("%d",D-C);
			}else {
				printf("%d",D-A);
			}
		}
	}
	
	
	return 0;
}