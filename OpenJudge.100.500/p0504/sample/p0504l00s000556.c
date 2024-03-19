#include <stdio.h>

int main(){
	int H,A;
	scanf("%d%d",&H,&A);
	if(H%A == 0){
		printf("%d",H/A);
	}
	if(H > A){
		printf("%d",(H/A)+1);
	}
	else if (H < A){
		printf("%d",1);
	}
	return 0;
}