#include <stdio.h>

int main(){
	int H,A;
	scanf("%d%d",&H,&A);
	if(H%A == 0){
		printf("%d",H/A);
	}
	if(H > A){
		printf("%d",H/A+1);
	}
	if(H < A){
		printf("1");
	}
	return 0;
}