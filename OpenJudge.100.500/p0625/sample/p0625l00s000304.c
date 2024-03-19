#include<stdio.h>

int main(){
	
	int A,B;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	if(A >=8 || B >=8){
		printf(":C");
	} else {
		printf("Yay!");
	}
	
	return 0;
}