#include <stdio.h>

int main(){
	int A,B;
	int x;
	
	scanf("%d %d", &A, &B);
	if(A<B){
		x=A;
		A=B;
		B=x;
	}
	
	for(x=0;A>0&&B>0&&x<16;x++){
		if(x%2==0){
			A--;
		}else{
			B--;
		}
	}
	
	if(A<=1&&B<=1){
		printf("Yay !");
	}else{
		printf(":(");
	}
	return 0;
}