#include<stdio.h>

int main(void){
	long long A;
	double B;
	scanf("%lld %lf",&A,&B);
	printf("%lld\n",(long long)((double)A*B/1));
	return 0;
}

