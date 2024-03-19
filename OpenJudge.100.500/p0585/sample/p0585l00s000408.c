#include <stdio.h>

int main(void){
	int A,B,T;
	scanf("%d %d %d",&A,&B,&T);
	int a=A;
	int N=0;
	while(A<=(T+0.5)){

		N+=B;
		A = A + a;
	}

	printf("%d\n",N);
}