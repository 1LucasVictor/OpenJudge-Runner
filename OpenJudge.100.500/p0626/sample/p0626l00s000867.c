#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int N=0,D=0;

	scanf("%d %d" ,&D ,&N);

	if(D==0){
		switch(N){

		case 100: printf("%d", 101);break;
		default : printf("%d", N);
		}
	}

	else if(D==1){
		printf("%d", 100*N);

	}
	else{
		printf("%d", 10000*N);
	}


	return 0;
}

