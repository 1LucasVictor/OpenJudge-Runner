#include <stdio.h>
#include <stdlib.h>
int main(){
	int A, B;
	scanf("%d %d",&A,&B);
	if((A+B)>16){
		printf(":(\n");
	}
	if(A>8 || B>8){
		printf(":(\n");
	}
	else{
		printf("Yay!\n");
	}
	

	return 0;
}