#include <stdio.h>

int main(){
	int A,B;
	int x;
	scanf("%d %d", &A, &B);
	
	if(A<B){
		x=B-A;
	}else{
		x=A-B;
	}
	
	if(x<=1){
		printf("Yay !");
	}else{
		printf(":(");
	}
	return 0;
}