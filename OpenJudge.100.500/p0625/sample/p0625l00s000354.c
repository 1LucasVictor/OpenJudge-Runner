#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 16
int main(){
	int pedacos[MAXTAM];
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