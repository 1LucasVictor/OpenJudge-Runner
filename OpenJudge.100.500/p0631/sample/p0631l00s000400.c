#include <stdio.h>

int main(void){
	int A,B,X;
	
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&X);
	
	if(A<=X){
		if(A+B>=X){
		printf("YES");
		}else{
		printf("NO");
		}
	}else{
		printf("NO");
	}
	return 0;}