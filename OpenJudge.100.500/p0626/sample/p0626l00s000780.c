#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int N=0,D=0,result=0;
	double d_N=0,d_D=0;

	scanf("%d %d" ,&D ,&N);

	if(D==0){
		switch(N){

		case 100: printf("%d", 101);break;
		default :printf("%d", N);
		}
	}

	else{
		d_N=(double)N;
		d_D=(double)D;
		result = (int)(d_N*(double)pow(100, d_D));


		printf("%d", result);
	}


	return 0;
}

