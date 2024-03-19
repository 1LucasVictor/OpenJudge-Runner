#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//char S[10];
	int A=0,B=0,C=0;

	scanf("%d %d %d" ,&A,&B,&C);


	if(A-B>=C){

	printf("%d", 0);

	}

	else{
		printf("%d",C-A+B );
	}

	return 0;
}

